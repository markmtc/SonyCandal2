#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::init()
{
    if ( SDL_Init( SDL_INIT_VIDEO | SDL_INIT_AUDIO) < 0 )
    {
        fprintf(stderr, "Unable to init SDL: %s\n", SDL_GetError() );
		SDL_Delay( 5000 );
        exit(EXIT_FAILURE);
    }
}

void Game::handleEvents()
{}

void Game::update()
{}

void Game::render()
{}

