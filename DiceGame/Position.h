#pragma once
#include"Dice.h"

class location
{
private:
	int x = 32;
	int y = 2;

public:
	int mapLocation = 0;
	int moveShortCutOrTrap();
	void moveMap(Dice* play);
	void printLocationP(location *p);
};