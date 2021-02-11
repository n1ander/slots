#include <iostream>
#include <SDL2/SDL.h>
#include "renderer.h"
#include "game.h"

int main(){
	Renderer r(640, 480);
	r.Render();
    return 0;
}