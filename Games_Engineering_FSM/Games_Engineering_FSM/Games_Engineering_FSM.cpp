// Games_Engineering_FSM.cpp : Defines the entry point for the console application.
//
//Using SDL and standard IO 
#include "stdafx.h"
#include <stdio.h>
#include <chrono>
#include <thread>
#include <iostream>
//#include <SDL.h>
#include "Animation.h"
#include "State.h"
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

int main(int argc, char* args[])
{
	using namespace std::chrono_literals;
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0) {
			fsm.jumping();
			this_thread::sleep_for(chrono::milliseconds::duration(1000)); 
			std::cout << "jumping" << endl;
			i = 1;
		}
		else {
			fsm.climbing();
			this_thread::sleep_for(chrono::milliseconds::duration(1000)); 
			std::cout << "climbing" << endl;
			i = 0;
		}
	}

	/*

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
	cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	}
	else
	{
	cout << "SDL initialization succeeded!";
	}

	cin.get();
	*/

    return 0;
}

