@echo off
setlocal
  mkdir bin >NUL 2>NUL
  call c-plus-plus.conf.bat

  call :MAKE_DIR compiler srefc srefc
  call :MAKE_DIR lexgen lexgen LexGen
  call :MAKE_DIR srmake srmake SRMake

  goto :EOF
endlocal

:MAKE_DIR
setlocal
  set DIR=%1
  set TARGET=%2
  set MAINSRC=%3

  pushd %DIR%
  set FILELIST=%MAINSRC%.cpp
  for %%c in (*.cpp) do call :ADD_FILE_TO_LIST %%c
  %CPPLINE% -I..\srlib %FILELIST%
  if exist %MAINSRC%.exe move %MAINSRC%.exe ..\bin\%TARGET%.exe
  if exist a.exe move a.exe ..\bin\%TARGET%.exe
  if exist *.obj erase *.obj
  if exist *.tds erase *.tds
  popd
endlocal
goto :EOF

:ADD_FILE_TO_LIST
:: без setlocal
  if not {%1}=={%MAINSRC%.cpp} set FILELIST=%FILELIST% %1
:: без endlocal
goto :EOF
