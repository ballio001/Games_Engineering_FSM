// Games_Engineering_FSM.cpp : Defines the entry point for the console application.
//
//Using SDL and standard IO 
//(trying to install it but microsoft don't let me so i need some time fixing this issue)
//#include <SDL.h>

#include <stdio.h>
#include <thread>
#include <chrono>
#include <iostream>
#include "stdafx.h"
#include "Animation.h"
#include "State.h"
#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

using namespace std;

int main(int argc, char* args[])
{
	Animation fsm;
	int i = 0;
	while (true)
	{
		if (i == 0) {
			fsm.jumping();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //gives an error
			std::cout << "jumping" << endl;
			i = 1;
		}
		else {
			fsm.climbing();
			std::this_thread::sleep_for(std::chrono::milliseconds(1000)); //gives an error
			std::cout << "climbing" << endl;
			i = 0;
		}
	}//test
    return 0;
}

