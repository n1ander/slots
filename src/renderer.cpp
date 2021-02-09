#include <iostream>
#include "renderer.h"
#include "game.h"

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
}

Renderer::~Renderer(){
	SDL_DestroyWindow(window);
	SDL_Quit();
}

void Renderer::Render(){
	running = true;
	SDL_Event e;
	while(running){
		SDL_PollEvent(&e);
		if(e.type == SDL_QUIT){
			std::cout << "Quit Message.\n";
			running = false;
		}
	}
}