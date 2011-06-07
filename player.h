#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>

struct player_t
{
	int currentLocation;
	std::vector<int> inventory;
	std::string input;
	std::string cmd1;
	std::string cmd2;
};

extern player_t hero;

#endif
