#include <iostream>
#include <SDL2/SDL.h>
#include "renderer.h"
#include "game.h"

int main(){
	Renderer r(1080, 720);
	r.Render();
    return 0;
}