// Games_Engineering_FSM.cpp : Defines the entry point for the console application.
//
//Using SDL and standard IO
//#include <SDL.h>
#include <stdio.h>
#include "stdafx.h"
#include "Animation.h"
#include "State.h"
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"
#include <iostream>
#include <thread>


int main()
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0) {
			fsm.jumping();
			//std::this_thread::sleep_for(std::chrono::milliseconds dura(100));
		}
	}
    return 0;
}

