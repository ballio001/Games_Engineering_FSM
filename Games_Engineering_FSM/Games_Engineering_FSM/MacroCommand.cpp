#include "stdafx.h"
#include "MacroCommand.h"

MacroCommand::MacroCommand()
{

}

MacroCommand::~MacroCommand()
{
	std::cout << "dtor" << std::endl;
}

void MacroCommand::add(Command* command)
{
	commands.push_back(command);
}

void MacroCommand::remove(Command* command)
{
	commands.remove(command);
}


void MacroCommand::execute()
{
	std::list<Command*>::iterator iter;

	for (iter = commands.begin(); iter != commands.end(); ++iter)
	{
		(*iter)->execute();
	}

	std::cout << "execution complete..." << std::endl;
}