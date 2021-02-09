#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>

class Renderer{
	public:
		Renderer(int width, int height);
		~Renderer();

		void Render();

	private:
		SDL_Window *window;
		SDL_Renderer *renderer;

		bool running;
};

#endif