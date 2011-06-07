/*
 *  rooms.h
 *  AdvGame
 *
 *
 */
#ifndef WORLD_H
#define WORLD_H
#include <string>

const int ROOM_EXIT_LIST = 10;
const int ROOM_INVENTORY_SIZE = 10;

struct exit_t
{
	std::string name;
	int locDest;
};

struct room_t
{
	std::string name;
	std::string desc;
	exit_t exits[ROOM_EXIT_LIST];
	int inventory[ROOM_INVENTORY_SIZE];
	
	int _Look() { return 0; }
};

struct test_t
{
	std::string name;
	std::string desc;
	exit_t exits[ROOM_EXIT_LIST];
	
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
extern exit_t exits[];
extern test_t tests[];
extern weapon_t weapons[];

#endif