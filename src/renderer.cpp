#include <iostream>
#include "renderer.h"
#include "game.h"

Renderer::Renderer(int width, int height){
	
	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		std::cout << "SDL could not initialize.\n";
		std::cout << "SDL_Error: " << SDL_GetError() << "\n";
	}

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

	renderer = SDL_CreateRenderer(window, -1, 0);

	if(renderer == NULL){
		std::cout << "Could not create renderer: %s\n", SDL_GetError();
	}
}

Renderer::~Renderer(){
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Renderer::Render(){
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);
}
