#include <stdio.h>
#include "Game.h"

int main(int argc, char **argv) {
	Game *game=new Game();
	game->init();
	return 0;
}
