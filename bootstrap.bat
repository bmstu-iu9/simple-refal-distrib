@echo off
setlocal
  call scripts\load-config.bat || exit /b 1

  %CPPLINEE%rasl-appender\_rasl-appender.exe rasl-appender\rasl-appender.cpp ^
    %CPPLINEESUF% || exit /b 1

  call :MAKE_DIR compiler rlc-core || exit /b 1
  call :MAKE_DIR lexgen rl-lexgen || exit /b 1
  call :MAKE_DIR interpreter rlgo DEBUG || exit /b 1
  call :MAKE_DIR make rlmake-core || exit /b 1
  call :MAKE_DIR rsl-decompiler rl-rsl-decompiler || exit /b 1

  copy bin\rlc-core.exe bin\srefc-core.exe
  copy bin\rl-lexgen.exe bin\lexgen.exe
  copy bin\rlmake-core.exe bin\srmake-core.exe
  copy bin\rl-rsl-decompiler.exe bin\rsl-decompiler.exe

  pushd lib-prefixes
  call make.bat || exit /b 1
  popd

  for %%L in (Hash Library GetOpt LibraryEx Platform) do (
    call bin\rlmake --scratch -X-OCdDPRS --makelib lib\src\%%L ^
      -o lib\%%L.dll || exit /b 1
  )
  if exist lib\*.tds erase lib\*.tds

  if exist *.obj erase *.obj
  if exist bin\*.tds erase bin\*.tds
  erase rasl-appender\_rasl-appender.*

  goto :EOF
endlocal

:MAKE_DIR
setlocal
  set DIR=%1
  set TARGET=..\bin\%2.exe

  if {%3}=={DEBUG} (
    set DEBUGDIR=debug
  ) else (
    set DEBUGDIR=debug-stubs
  )

  echo ... compile %2.exe
  pushd %DIR%
  set FILELIST=
  for %%c in (*.cpp) do call :ADD_FILE_TO_LIST %%c
  %CPPLINEE%%TARGET% ^
    -I..\lib\scratch-rt ^
    -I..\lib\scratch-rt\%DEBUGDIR% ^
    %FILELIST% ^
    ..\lib\scratch-rt\platform-Windows\refalrts-platform-specific.cpp ^
    %CPPLINEESUF%
  if exist *.obj erase *.obj
  if exist ..\bin\*.tds erase ..\bin\*.tds

  if not exist %TARGET% (
    echo Can't create file %TARGET%, aborting
    exit /b 1
  )

  set FILELIST=
  for %%c in (*.rasl) do call :ADD_FILE_TO_LIST %%c
  ..\rasl-appender\_rasl-appender.exe %TARGET% %FILELIST% || exit /b 1
  popd
endlocal
goto :EOF

:ADD_FILE_TO_LIST
:: без setlocal
  set FILELIST=%FILELIST% %1
:: без endlocal
goto :EOF
