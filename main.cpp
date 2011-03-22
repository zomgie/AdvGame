#include <iostream>
#include "world.h"
#include "commands.h"
#include <map>

using namespace std;

int main ()
{
	int currentLocation = 0;
	string input;
	for(;;)
	{
		getline(cin, input);
		parseCommand(&input, &currentLocation);
	}
	
}

