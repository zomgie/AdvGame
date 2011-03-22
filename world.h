/*
 *  rooms.h
 *  AdvGame
 *
 *  Created by rhathar on 3/11/11.
 *  Copyright 2011 Novacoast, Inc.. All rights reserved.
 *
 */
#ifndef WORLD_H
#define WORLD_H
#include <string>


const int ROOM_EXIT_LIST = 10;
const int ROOM_INVENTORY_SIZE = 10;

struct room_t
{
	std::string name;
	std::string desc;
	int exits[ROOM_EXIT_LIST];
	int inventory[ROOM_INVENTORY_SIZE];
};	

struct weapon_t
{
	std::string name;
	std::string desc;
	int hp;
	int damage;
	int weight;
	int level;
};

extern room_t rooms[];
extern weapon_t weapons[];

#endif