#pragma once
#include "Animation.h"
#include <iostream>

using namespace std;

class State
{
public:
	virtual void idle(Animation* a) {
		cout << "State::Idling" << endl;
	}

	virtual void jumping(Animation* a) {
		cout << "State::jumping" << endl;
	}

	virtual void climbing(Animation* a) {
		cout << "State::climbing" << endl;
	}
};

