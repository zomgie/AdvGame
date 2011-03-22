/*
 *  commands.h
 *  AdvGame
 *
 *
 */

#ifndef COMMANDS_H
#define COMMANDS_H
#include <string>

void parseCommand(std::string *pInput, int *pLoc);
void doCommand(std::string inputFirst, std::string inputSecond, int *pLoc);
void cmdLook(int *pLoc);

#endif