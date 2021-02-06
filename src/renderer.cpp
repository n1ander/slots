#include <iostream>
#include "renderer.h"

Renderer::Renderer(int width, int height){
	SDL_Init(SDL_INIT_VIDEO);
	window = SDL_CreateWindow(
		"Slots",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		width,
		height,
		SDL_WINDOW_OPENGL
	);

	if(window == NULL){
		std::cout << "Could not create window: %s\n", SDL_GetError();
	}
	SDL_Delay(3000);
}

Renderer::~Renderer(){
	SDL_DestroyWindow(window);
	SDL_Quit();
}