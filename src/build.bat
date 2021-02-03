@echo off

mkdir ..\build
pushd ..\build
cl -Zi ..\src\main.cpp SDL2.lib
popd