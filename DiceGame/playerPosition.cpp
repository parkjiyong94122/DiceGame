#include"main.h"

int location::moveShortCutOrTrap()
{
	if (mapLocation == 4)
	{
		x = x - 12;
		y = y + 6;
		mapLocation = 10;
		gotoxy(50, 10);
		cout << "������:4���� 10���� �̵�" << endl;
		Sleep(1000);
	}
	else if (mapLocation == 22)
	{
		x = x + 12;
		y = y - 12;
		mapLocation = 8;
		gotoxy(50, 10);
		cout << "����:22���� 8���� �̵� " << endl;
		Sleep(1000);

	}
	else if (mapLocation == 18)
	{
		y = y + 9;
		mapLocation = 29;
		gotoxy(50, 10);
		cout << "������:18���� 29���� �̵� " << endl;
		Sleep(1000);
	}
	else if (mapLocation == 32)
	{
		y = y - 12;
		mapLocation = 20;
		gotoxy(50, 10);
		cout << "����:32���� 20���� �̵� " << endl;
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
	cout << "��" <<mapLocation;
	gotoxy(40, 8);
	cout << "p1��ġ" << mapLocation;
	
	gotoxy(p->x, p->y);
	cout << "��" << p->mapLocation;
	gotoxy(40, 9);
	cout << "p2��ġ" << p->mapLocation;
	
	Sleep(300);
}
