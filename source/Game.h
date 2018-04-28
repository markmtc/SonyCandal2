#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include "SDL/sdl.h"
#include <stdlib.h>
//#include <time.h>
//#include <gccore.h>
//#include <wiiuse/wpad.h> 

class Game
{
public:
    Game();
    ~Game();
    void init();
    
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running() { return isRunning; };

private:
    bool isRunning;

};

#endif  