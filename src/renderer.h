#ifndef RENDERER_H
#define RENDERER_H

#include "../include/SDL.h"

class Renderer{
    public:
        Renderer(int winWidth, int winHeight);
        ~Renderer();

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
};

#endif