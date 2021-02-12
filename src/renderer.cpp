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
	running = true;
	SDL_Event e;
	while(running){
		SDL_PollEvent(&e);
		switch(e.type){
			case SDL_QUIT:
				std::cout << "QUIT MESSAGE.\n";
				running = false;
			case SDL_KEYDOWN:
				r = rand() % 255;
				g = rand() % 255;
				b = rand() % 255;
				break;
			default:
				break;
		}
		SDL_SetRenderDrawColor(renderer, r, g, b, 255);
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
}