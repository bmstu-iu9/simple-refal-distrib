@echo off
erase bin\*.exe
if exist bin\*.dll erase bin\*.dll
if exist bin\*.so erase bin\*.so
erase lib\*.*-prefix
