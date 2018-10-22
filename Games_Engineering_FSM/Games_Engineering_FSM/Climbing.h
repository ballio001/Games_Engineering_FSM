#pragma once
#include "State.h"
#include "Idle.h"
#include <iostream>

using namespace std;

class Climbing : public State {
	Climbing();
	//~Climbing();

	void idle(Animation* a) {
		cout << "Going from Climbing to Idling" << endl;
		a->setCurrent(new Idle());
		delete this;
	}
};