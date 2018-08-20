#include"main.h"

int location::moveShortCutOrTrap()
{
	if (mapLocation == 4)
	{
		x = x - 12;
		y = y + 6;
		mapLocation = 10;
		gotoxy(50, 10);
		cout << "지름길:4에서 10으로 이동" << endl;
		Sleep(1000);
	}
	else if (mapLocation == 22)
	{
		x = x + 12;
		y = y - 12;
		mapLocation = 8;
		gotoxy(50, 10);
		cout << "함정:22에서 8으로 이동 " << endl;
		Sleep(1000);

	}
	else if (mapLocation == 18)
	{
		y = y + 9;
		mapLocation = 29;
		gotoxy(50, 10);
		cout << "지름길:18에서 29으로 이동 " << endl;
		Sleep(1000);
	}
	else if (mapLocation == 32)
	{
		y = y - 12;
		mapLocation = 20;
		gotoxy(50, 10);
		cout << "함정:32에서 20으로 이동 " << endl;
		Sleep(1000);
	}
	else
		return 0;

	return 1;
}

void location::moveMap(Dice* play)
{
	for (int i = 0; i < play->diceNumber; i++)
	{
		(mapLocation)++;
		if ((mapLocation) == 1)
		{
			x = 2;
			y = 2;
		}
		else
		{
			if ((mapLocation) % (MAPSIZE + 1) == 0 || (mapLocation) % (MAPSIZE + 1) == 1)
				y = y + 3;
			else if ((mapLocation) % ((MAPSIZE + 1) * 2) < MAPSIZE + 1)
				x = x + 6;
			else if ((mapLocation) % ((MAPSIZE + 1) * 2) > MAPSIZE + 1)
				x = x - 6;
		}
	}
}

void location::printLocationP(location *p)
{

	gotoxy(x, y);
	cout << "○" <<mapLocation;
	gotoxy(40, 8);
	cout << "p1위치" << mapLocation;
	
	gotoxy(p->x, p->y);
	cout << "●" << p->mapLocation;
	gotoxy(40, 9);
	cout << "p2위치" << p->mapLocation;
	
	Sleep(300);
}
