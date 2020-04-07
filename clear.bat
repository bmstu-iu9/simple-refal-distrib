@echo off
erase bin\*.exe
if exist lib\*.dll erase lib\*.dll
if exist lib\*.so erase lib\*.so
erase lib\*.*-prefix
