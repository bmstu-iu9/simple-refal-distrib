@echo off
setlocal
  mkdir bin >NUL 2>NUL
  call scripts\load-config.bat || exit /b 1

  %CPPLINEE%rasl-appender\_rasl-appender.exe rasl-appender\rasl-appender.cpp

  call :MAKE_DIR compiler srefc-core || exit /b 1
  call :MAKE_DIR lexgen lexgen || exit /b 1
  call :MAKE_DIR srmake srmake-core || exit /b 1
  call :MAKE_DIR srlib-rich-prefix srlib-rich-prefix || exit /b 1
  move bin\srlib-rich-prefix.exe srlib\rich\rich.exe-prefix
  call :MAKE_DIR srlib-rich-debug-prefix srlib-rich-debug-prefix || exit /b 1
  move bin\srlib-rich-debug-prefix.exe srlib\rich-debug\rich-debug.exe-prefix
  call :MAKE_DIR srlib-slim-prefix srlib-slim-prefix || exit /b 1
  move bin\srlib-slim-prefix.exe srlib\slim\slim.exe-prefix
  call :MAKE_DIR srlib-slim-debug-prefix srlib-slim-debug-prefix || exit /b 1
  move bin\srlib-slim-debug-prefix.exe srlib\slim-debug\slim-debug.exe-prefix

  if exist *.obj erase *.obj
  erase rasl-appender\_rasl-appender.*

  goto :EOF
endlocal

:MAKE_DIR
setlocal
  set DIR=%1
  set TARGET=..\bin\%2.exe

  pushd %DIR%
  set FILELIST=
  for %%c in (*.cpp) do call :ADD_FILE_TO_LIST %%c
  %CPPLINEE%%TARGET% -I..\srlib\scratch -DDONT_PRINT_STATISTICS ^
    %FILELIST% ..\srlib\scratch\platform-Windows\refalrts-platform-specific.cpp
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
