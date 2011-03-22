/*
 *  commands.cpp
 *  AdvGame
 *
 *
 */

#include <iostream>
#include <string>
#include <map>
#include "commands.h"
#include "world.h"

std::map<std::string, void(*)(int*)> cmdList;

void parseCommand(std::string *pInput, int *pLoc)
{
	std::string input = *pInput;
	int location = *pLoc;
	int strPos = input.find(" ");
	std::string inputFirst = input.substr(0,strPos);
	std::string inputSecond = input.substr(strPos+1,input.length());
	
	doCommand(inputFirst, inputSecond, &location);
}

void doCommand(std::string cmd1, std::string cmd2, int *pLoc)
{
	cmdList["look"] = &cmdLook;
	
	std::map<std::string, void(*)(int*)>::iterator pCmd = cmdList.find(cmd1);

	if( pCmd != cmdList.end() )
		pCmd->second(pLoc);
	else 
		std::cout << "Huh? I don't understand " << cmd1 << std::endl;
}

void cmdLook( int *pLoc )
{
	std::cout << rooms[ *pLoc ].name << std::endl;
	std::cout << rooms[ *pLoc ].desc << std::endl;
}


