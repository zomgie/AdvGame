/*
 *  commands.cpp
 *  AdvGame
 *
 *  Created by rhathar on 3/21/11.
 *  Copyright 2011 Novacoast, Inc.. All rights reserved.
 *
 */

#include <iostream>
#include <string>
#include "commands.h"
#include "world.h"

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
	if( cmd1 == "look" )
	{
		int currentLocation = *pLoc;
		doLook(&currentLocation);
	} else 
		std::cout << "Huh? I don't understand " << cmd1 << std::endl;
}

void doLook( int *pLoc )
{
	std::cout << rooms[ *pLoc ].name << std::endl;
	std::cout << rooms[ *pLoc ].desc << std::endl;
}

