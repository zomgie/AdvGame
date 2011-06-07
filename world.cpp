#include "world.h"

room_t rooms[] = {
{"Bedroom", "There is a bed in here.",{
	{"North",1},
	{"East",2}}},
{"Kitchen", "Knives! Knives everywhere!",{
	{"South",0}}},
{"Hallway North", "A long corridor.",{
	{"West",0},
	{"South",3}}},
{"Hallway South", "A long corridor.",{
	{"North",2}}}
};

weapon_t objects[] = {
{"Wooden Sword", "It's dangerous to go alone, take this.", 5, 1, 2, 0},
{"Big Sword", "You can't possibly pick this up.", 100, 60, 40, 20},
{"Rapier", "Just like your wit.", 10, 5, 2, 1}
};

test_t tests[] = {
	{"Name","And hark, but what is a name in the face of injustice? For why cannot a butterfly fight in " \
	 "the face of evil, his right being as great as the mightiest wolf?",{
		{"North",2},
		{"South",1}}},
	{"Test","Other desc",{
		{"East",2}}}
};

