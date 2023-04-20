@echo off 
call D:\DevTools\VisualStudio\IDE\VC\Auxiliary\Build\vcvars32.bat
cl test.c ..\Algorithms\dijkstra\dijkstra.c ..\Utils\utils.c dijkstraTest.c 
del *.obj
test
