@echo off
setlocal
  if exist *.rasl erase *.rasl

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
  call ..\bin\rlmake.bat %SCRIPT_FLAGS% rich-prefix-exe ^
    -o ..\lib\rich%DEBUG%.exe-prefix || exit /b 1

  call ..\bin\rlmake.bat %SCRIPT_FLAGS% slim-prefix-exe ^
    -o ..\lib\slim%DEBUG%.exe-prefix || exit /b 1

  call ..\bin\rlmake.bat %SCRIPT_FLAGS% --makelib rich-prefix-lib ^
    -o ..\lib\rich%DEBUG%.lib-prefix || exit /b 1
endlocal
goto :EOF
