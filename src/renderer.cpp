#include "renderer.h"
#include <stdio.h>

Renderer::Renderer(int winWidth, int winHeight){
    SDL_Init(SDL_INIT_VIDEO);
    window = SDL_CreateWindow(
        "Slots",
        SDL_WINDOWPOS_UNDEFINED,
        SDL_WINDOWPOS_UNDEFINED,
        winWidth,
        winHeight,
        SDL_WINDOW_OPENGL
    );
    if(window == NULL){
        printf("Could not create window: %s\n", SDL_GetError());
    }
    SDL_Delay(3000);
}

Renderer::~Renderer(){
    SDL_DestroyWindow(window);
    SDL_Quit();
}