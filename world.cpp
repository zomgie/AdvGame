#include <iostream>
#include <string>

using namespace std;

typedef enum { north, south, east, west, northeast, northwest, southeast, 
				southwest, up, down} exit_t;
const int ROOM_INVENTORY_SIZE = 10;
int location;

void commDesc(int location);
void commExits(int location);
//void commLocationInv(int location);
//void commLook(string input);

struct object_t
{
	int* pLocation;
	string name;
	string desc;
};

struct room_t
{
	object_t general;
	short exits[ sizeof(exit_t) ];
	int inventory[ROOM_INVENTORY_SIZE];
};

struct weapon_t
{
	object_t general;
	int hp;
	int damage;
	int weight;
	int level;
};	

struct item_t
{
	int weight;
};

weapon_t weapons[] = {
{NULL,"Wooden Sword", "It's dangerous to go alone, take this.", 5, 1, 2, 0},
{NULL,"Dragon Sword", "You can't possibly pick this up.", 100, 60, 40, 20},
{NULL,"Rapier", "Just like your wit.", 10, 5, 2, 1}
};

room_t rooms[] = {					// The first array contains what room is linked to.
{NULL,"Bedroom", "There is a bed in here.", {-1,1,2,-1} },
{NULL,"Kitchen", "Knives! Knives everywhere!", {0,-1,3,-1} },
{NULL,"Hallway North", "A long corridor.",{-1,-1,-1,0} },
{NULL,"Hallway South", "A long corridor.",{-1,-1,-1,1} }
};

void commDesc(int location)
{
	int currentLocation = location;
	cout << "Room: " << rooms[currentLocation].general.name << "\n";
	cout << rooms[currentLocation].general.desc << "\n";
	cout << "Exits: ";	
	commExits(currentLocation);
}

void commExits(int location) // list all exits
{
	int currentLocation = location; // where are we working?
	
	for(int i=0;i<sizeof(exit_t);i++) // loop through all exit types
	{
		int exit = rooms[currentLocation].exits[i]; // is the room using that exit?
		if(rooms[currentLocation].exits[i] != -1) // is it connected?
		{
			if(north == i)
				cout << "North\t";
			if(south == i)
				cout << "South\t";
			if(east == i)
				cout << "East\t";
			if(west == i)
				cout << "West\t";
			if(northeast == i)
				cout << "NorthEast\t";
			if(northwest == i)
				cout << "NorthWest\t";
			if(southeast == i)
				cout << "SouthEast\t";
			if(southwest == i)
				cout << "SouthWest\t";
		}
	}	
	cout << "\n";
}

/*
void commLocationInv(int location)
{
	int currentLocation = location;
	for(int i=0;i<ROOM_INVENTORY_SIZE;i++)
	{
		int object = rooms[currentLocation].inventory[i];
		if( object>0)
			cout << objects[object].name << "\n";
	}
}

void commLook(string input)
{
	for(int i=0;i<(sizeof(objects)/sizeof(object_t));i++)
	{
		if( input == objects[i].name && i != 0 )
		{
			cout << "\nYou look at a " << objects[i].name << ":\n";
			cout << objects[i].desc << "\n";
		}
	}
}
 */

