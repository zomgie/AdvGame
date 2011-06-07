/*
 *  commands.h
 *  AdvGame
 *
 *
 */

#ifndef COMMANDS_H
#define COMMANDS_H
#include <string>
#include "player.h"
#include "world.h"

void parseCommand(player_t *pObject);
void doCommand(player_t *pObject);
void gameAnnounce(std::string text, int arg);
int cmdLook(player_t *pObject);
int cmdMove(player_t *pObject);
int cmdExits(room_t *pObject);
int cmdInventory(player_t *pObject);


#endif