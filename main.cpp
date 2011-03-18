#include <iostream>
#include "world.h"

using namespace std;

int main()
{
	int currentLocation = 0;
//	commDesc(currentLocation); // send room ID to describe
	
	string userInput;

	cout << "Welcome to AdvGame!\n";
	
	while (0)
	{
		getline(cin, userInput);

		if ( userInput.find("look") == 0 )
		{
			if ( userInput.find("wooden sword") == 5 )
				cout << "You look at the wooden sword!";
			else
				commDesc(currentLocation);
		} else if ( userInput.find("quit") == 0 )
				break;
	}
	return 0;
}