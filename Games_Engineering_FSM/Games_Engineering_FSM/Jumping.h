#pragma once
#include "State.h"
#include <iostream>

using namespace std;

class Jumping : public State {
	Jumping();
	//~Jumping();

	void idle(Animation* a);
};