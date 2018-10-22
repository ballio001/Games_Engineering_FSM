
#include "stdafx.h"
#include "Game.h"

SDL_Texture* playerTex;
SDL_Rect srcR, destR; //source rectangle / destination rectangle

Game::Game()
{}

Game::~Game()
{}

void Game::init(const char* title, int width, int height, bool fullscreen)
{
	int flags = 0;
	fsm = new Animation();

	if (fullscreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer)
		{
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}

		isRunning = true;
	}

	SDL_Surface* tmpSurface = IMG_Load("hd_kirby_sprite_sheet.png");
	playerTex = SDL_CreateTextureFromSurface(renderer, tmpSurface);
	SDL_FreeSurface(tmpSurface);
}

void Game::handleEvents()
{
	//stops game from running when the x is pressed
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
	//needs change
	while (SDL_PollEvent(&event))
	{
		if (event.type == SDL_KEYDOWN)
		{
			if (event.key.keysym.sym == SDLK_SPACE)
			{
				fsm->jumping();
				cout << "jumping" << endl;
			}
			else if (event.key.keysym.sym == SDLK_c)
			{
				fsm->climbing();
				cout << "climbing" << endl;
			}
		}
	}
}

void Game::update()
{
	//cnt++;

	destR.h = 600;
	destR.w = 800;

	//std::cout << cnt << std::endl;
}

void Game::render()
{
	SDL_RenderClear(renderer);
	//renderer, texture, source rectangle (part you want to draw), dest rect (where you want to draw it)
	SDL_RenderCopy(renderer, playerTex, NULL, &destR);
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}