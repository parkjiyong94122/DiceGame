#include"main.h"

//지름길 or 함정
int position::moveShortCutOrTrap()
{
	if (mapPosition == 4)
	{
		x = x - 12;
		y = y + 6;
		mapPosition = 10;
		gotoxy(50, 10);
		cout << "지름길:4에서 10으로 이동" << endl;
		Sleep(1000);
	}
	else if (mapPosition == 22)
	{
		x = x + 12;
		y = y - 12;
		mapPosition = 8;
		gotoxy(50, 10);
		cout << "함정:22에서 8으로 이동 " << endl;
		Sleep(1000);

	}
	else if (mapPosition == 18)
	{
		y = y + 9;
		mapPosition = 29;
		gotoxy(50, 10);
		cout << "지름길:18에서 29으로 이동 " << endl;
		Sleep(1000);
	}
	else if (mapPosition == 32)
	{
		y = y - 12;
		mapPosition = 20;
		gotoxy(50, 10);
		cout << "함정:32에서 20으로 이동 " << endl;
		Sleep(1000);
	}
	else
		return 0;

	return 1;
}

void position::moveMap(Dice* dice)
{
	for (int i = 0; i < dice->diceNumber; i++)
	{
		(mapPosition)++;
		if ((mapPosition) == 1)
		{
			x = 2;
			//p2,p1 값 분리 시간남으면
			y = 2;
		}
		else
		{
			if ((mapPosition) % (MAPSIZE + 1) == 0 || (mapPosition) % (MAPSIZE + 1) == 1)
				y = y + 3;
			else if ((mapPosition) % ((MAPSIZE + 1) * 2) < MAPSIZE + 1) //맵 가로 크기 5 일경우 맵가로크기
				x = x + 6;
			else if ((mapPosition) % ((MAPSIZE + 1) * 2) > MAPSIZE + 1)
				x = x - 6;
		}
		gotoxy(x, y);
	}
}