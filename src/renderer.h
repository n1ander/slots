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
		int r = 0, g = 255, b = 0;
};

#endif