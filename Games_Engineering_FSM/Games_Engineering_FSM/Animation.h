#pragma once
class Animation
{
	class State* current;

public:
	Animation();
	void setCurrent(State* s);
	void idle();
	void jumping();
	void climbing();

};

