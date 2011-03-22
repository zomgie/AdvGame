#include "world.h"

room_t rooms[] = {
{"Bedroom", "There is a bed in here.", {-1,1,2,-1} },
{"Kitchen", "Knives! Knives everywhere!", {0,-1,3,-1} },
{"Hallway North", "A long corridor.",{-1,-1,-1,0} },
{"Hallway South", "A long corridor.",{-1,-1,-1,1} }
};

weapon_t weapons[] = {
{"Wooden Sword", "It's dangerous to go alone, take this.", 5, 1, 2, 0},
{"Big Sword", "You can't possibly pick this up.", 100, 60, 40, 20},
{"Rapier", "Just like your wit.", 10, 5, 2, 1}
};