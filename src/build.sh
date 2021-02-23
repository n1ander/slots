#!/bin/bash

#mkdir ../build
g++ main.cpp renderer.cpp game.cpp -o main -lSDL2
mv main ../build/main