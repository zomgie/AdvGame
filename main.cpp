#include <iostream>
#include "world.h"
#include "commands.h"
#include "player.h"

using namespace std;

int main ()
{
	hero.currentLocation = 0;
	cmdLook(&hero);
	
	for(;;)
	{
		getline(cin, hero.input);
		parseCommand(&hero);
	}

	
}

