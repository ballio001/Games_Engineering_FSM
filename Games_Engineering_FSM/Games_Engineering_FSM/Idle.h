#pragma once

#include <iostream>
#include "Animation.h"
#include "State.h"

class Idle : public State
{
public:
	void climbing(Animation* a);
	void jumping(Animation* a);
};

