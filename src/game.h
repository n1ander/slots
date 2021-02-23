#ifndef GAME_H
#define GAME_H

#include "renderer.h"

class Game{
	public:
		Game(int grid_width, int grid_height);
		void Run(Renderer &renderer);

	private:
};


#endif