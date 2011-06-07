/*
 *  commands.cpp
 *  AdvGame
 *
 *
 */

#include <iostream>
#include <string>
#include <map>
#include "commands.h"

using namespace std;

map<string, int(*)(player_t*)> cmdList;

void parseCommand(player_t *pObject)
{
	string input = pObject->input;
	int strPos = input.find(" ");
	pObject->cmd1 = input.substr(0,strPos);
	pObject->cmd2 = input.substr(strPos+1,input.length());

	doCommand(pObject);
}

void doCommand(player_t *pObject)
{
	string cmd1 = pObject->cmd1;

	cmdList["look"] = &cmdLook;
	cmdList["go"] = &cmdMove;
	cmdList["move"] = &cmdMove;
	cmdList["i"] = &cmdInventory;
	cmdList["inventory"] = &cmdInventory;
	
	map<string, int(*)(player_t*)>::iterator pCmd = cmdList.find(cmd1);
	
	if( pCmd != cmdList.end() )
		pCmd->second(pObject);
	else if ( cmdMove(pObject) )
		gameAnnounce("Huh? I don't understand " + cmd1,1);
}

void gameAnnounce( string text, int arg )
{
	switch (arg) {
		case 1:
			cout << text << endl;
			break;
		case 2:
			cout << text << " ";
			break;
		case 0:
			cout << text;
			break;
		default:
			cout << text << endl;
			break;
	}
}


int cmdLook( player_t *pObject )
{
	int loc = pObject->currentLocation;
	gameAnnounce(rooms[ loc ].name + "\n" + rooms[ loc ].desc, 1);
	cmdExits( &rooms[loc] );
	return 0;
}

int cmdMove( player_t *pObject )
{
	int loc = pObject->currentLocation;
	
	for(int i=0;i<ROOM_EXIT_LIST;i++)
	{
		exit_t exit = rooms[loc].exits[i];
		if( pObject->cmd2 == exit.name )
		{
			gameAnnounce("You go " + exit.name,1);
			pObject->currentLocation = exit.locDest;
			cmdLook( pObject );
			return 0;
		} 
	}
	
}

int cmdExits( room_t *pObject )
{
	for(int i=0;i<ROOM_EXIT_LIST;i++)
	{
		if(pObject->exits[i].name != "")
			gameAnnounce(pObject->exits[i].name,2);
	}
	gameAnnounce("",1);
	return 0;
}

int cmdInventory( player_t *pObject )
{
	gameAnnounce("Your inventory is empty.",1);
	
	return 0;][
}
	
	
	
	
	
	
	
	
	


