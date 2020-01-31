@echo off
setlocal
  if {%1}=={--debug} (
    set DEBUG=ON
  ) else (
    set DEBUG=OFF
  )

  call scripts\load-config.bat || exit /b 1

  %CPPLINEE%rasl-appender\_rasl-appender.exe rasl-appender\rasl-appender.cpp ^
    %CPPLINEESUF% || exit /b 1

  call :MAKE_DIR compiler srefc-core || exit /b 1
  call :MAKE_DIR lexgen lexgen || exit /b 1
  call :MAKE_DIR srmake srmake-core || exit /b 1
  call :MAKE_DIR rsl-decompiler rsl-decompiler || exit /b 1

  pushd lib-prefixes
  call make.bat || exit /b 1
  popd

  for %%L in (Hash Library GetOpt LibraryEx Platform) do (
    call bin\srmake --scratch -X-OCdDPRS --makelib lib\src\%%L ^
      -o bin\%%L.dll || exit /b 1
  )

  if exist *.obj erase *.obj
  if exist bin\*.tds erase bin\*.tds
  erase rasl-appender\_rasl-appender.*

  goto :EOF
endlocal

:MAKE_DIR
setlocal
  set DIR=%1
  set TARGET=..\bin\%2.exe

  echo ... compile %2.exe
  pushd %DIR%
  set FILELIST=
  for %%c in (*.cpp) do call :ADD_FILE_TO_LIST %%c
  %CPPLINEE%%TARGET% -I..\lib\scratch-rt %FILELIST% ^
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
  if {%DEBUG%}=={OFF} (
    if /I not {%1}=={refalrts-diagnostic-initializer.cpp} (
      if /I not {%1}=={refalrts-debugger.cpp} (
        set FILELIST=%FILELIST% %1
      )
    )
  ) else (
    set FILELIST=%FILELIST% %1
  )
:: без endlocal
goto :EOF
