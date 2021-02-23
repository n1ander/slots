#include <iostream>
#include <SDL2/SDL.h>
#include "game.h"

Game::Game(int grid_width, int grid_height){
}

void Game::Run(Renderer &Renderer){
	bool running = true;
	SDL_Event e;
	while(running){
		SDL_PollEvent(&e);
		switch(e.type){
			case SDL_QUIT:
				std::cout << "QUIT MESSAGE.\n";
				running = false;
			default:
				break;
		}
	}
}