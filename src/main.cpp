#define SDL_MAIN_HANDLED
#include "../include/SDL.h"
#include "renderer.h";

int main(){
    int width = 640;
    int height = 480;
    Renderer r(width, height);
    return 0;
}