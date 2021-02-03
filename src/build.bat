@echo off

mkdir ..\build
pushd ..\build
cl -Zi ..\src\main.cpp ..\src\renderer.cpp SDL2.lib
popd