/*
 *  commands.h
 *  AdvGame
 *
 *  Created by rhathar on 3/21/11.
 *  Copyright 2011 Novacoast, Inc.. All rights reserved.
 *
 */

#ifndef COMMANDS_H
#define COMMANDS_H
#include <string>

void parseCommand(std::string *pInput, int *pLoc);
void doCommand(std::string inputFirst, std::string inputSecond, int *pLoc);
void doLook(int *pLoc);


#endif