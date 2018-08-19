#pragma once
#include"Dice.h"

struct position
{
	int mapPosition = 0;
	int x = 32, y = 2;

	int moveShortCutOrTrap();
	void moveMap(Dice* dice);

};