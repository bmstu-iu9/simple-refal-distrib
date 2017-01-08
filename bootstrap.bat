@echo off
setlocal
  mkdir bin >NUL 2>NUL
  call c-plus-plus.conf.bat

  call :MAKE_DIR compiler srefc-core srefc
  call :MAKE_DIR lexgen lexgen LexGen
  call :MAKE_DIR srmake srmake-core SRMake

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
  %CPPLINE%..\bin\%TARGET% -I..\srlib -DDONT_PRINT_STATISTICS %FILELIST%
  if exist *.obj erase *.obj
  if exist ..\bin\*.tds erase ..\bin\*.tds
  popd
endlocal
goto :EOF

:ADD_FILE_TO_LIST
:: без setlocal
  if not {%1}=={%MAINSRC%.cpp} set FILELIST=%FILELIST% %1
:: без endlocal
goto :EOF
