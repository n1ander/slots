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
				std::cout << "KEY DOWN PRESSED.\n";
				SDL_SetRenderDrawColor(renderer, 255, 0, 255, SDL_ALPHA_OPAQUE);
				SDL_RenderDrawLine(renderer, 320, 200, 300, 240);
				SDL_RenderDrawLine(renderer, 300, 240, 340, 240);
				SDL_RenderDrawLine(renderer, 340, 240, 320, 200);
				//SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
				break;
			case SDL_KEYUP:
				std::cout << "KEY RELEASED.\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				break;
			default:
				break;
		}
		SDL_RenderClear(renderer);
		SDL_RenderPresent(renderer);
	}
}