@echo off
setlocal
  mkdir bin >NUL 2>NUL
  call c-plus-plus.conf.bat

  %CPPLINE%rasl-appender\_rasl-appender.exe rasl-appender\rasl-appender.cpp

  call :MAKE_DIR compiler srefc-core
  call :MAKE_DIR lexgen lexgen
  call :MAKE_DIR srmake srmake-core

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
  %CPPLINE%%TARGET% -I..\srlib -DDONT_PRINT_STATISTICS ^
    %FILELIST% ..\srlib\platform-Windows\refalrts-platform-specific.cpp
  if exist *.obj erase *.obj
  if exist ..\bin\*.tds erase ..\bin\*.tds

  set FILELIST=
  for %%c in (*.rasl) do call :ADD_FILE_TO_LIST %%c
  ..\rasl-appender\_rasl-appender.exe %TARGET% %FILELIST%
  popd
endlocal
goto :EOF

:ADD_FILE_TO_LIST
:: без setlocal
  set FILELIST=%FILELIST% %1
:: без endlocal
goto :EOF
