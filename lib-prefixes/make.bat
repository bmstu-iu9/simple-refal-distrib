@echo off
setlocal
  set SCRIPT_FLAGS=--scratch --static
  set DEBUG=
  call :MAKE_PREFIXES || exit /b 1

  set SCRIPT_FLAGS=--scratch --static --debug
  set DEBUG=-debug
  call :MAKE_PREFIXES || exit /b 1

  if exist *.obj erase *.obj
  if exist ..\lib\*.tds erase ..\lib\*.tds
endlocal
goto :EOF

:MAKE_PREFIXES
setlocal
  call ..\bin\srmake.bat %SCRIPT_FLAGS% rich%DEBUG%-prefix-exe ^
    -o ..\lib\rich%DEBUG%.exe-prefix || exit /b 1

  call ..\bin\srmake.bat %SCRIPT_FLAGS% slim%DEBUG%-prefix-exe ^
    -o ..\lib\slim%DEBUG%.exe-prefix || exit /b 1

  call ..\bin\srmake.bat %SCRIPT_FLAGS% --makelib rich%DEBUG%-prefix-lib ^
    -o ..\lib\rich%DEBUG%.lib-prefix || exit /b 1
endlocal
goto :EOF
