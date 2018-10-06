#include "stdafx.h"
#include "Idle.h"
#include "Climbing.h"
#include "Jumping.h"


void Idle::climbing(Animation* a)
{
	std::cout << "Climbing" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Idle::jumping(Animation* a)
{
	std::cout << "Jumping" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}