#include"main.h"

//지름길 or 함정
void moveShortCutOrTrap(player* p)
{
	if (p->mapPosition == 4)
	{
		p->x = p->x - 12;
		p->y = p->y + 6;
		p->mapPosition = 10;
		gotoxy(50, 10);
		cout << "지름길:4에서 10으로 이동" << endl;
		Sleep(1000);
	}
	else if (p->mapPosition == 22)
	{
		p->x = p->x + 12;
		p->y = p->y - 12;
		p->mapPosition = 8;
		gotoxy(50, 10);
		cout << "함정:22에서 8으로 이동 " << endl;
		Sleep(1000);

	}
	else if (p->mapPosition == 18)
	{
		p->y = p->y + 9;
		p->mapPosition = 29;
		gotoxy(50, 10);
		cout << "지름길:18에서 29으로 이동 " << endl;
		Sleep(1000);
	}
	else if (p->mapPosition == 32)
	{
		p->y = p->y - 12;
		p->mapPosition = 20;
		gotoxy(50, 10);
		cout << "함정:32에서 20으로 이동 " << endl;
		Sleep(1000);
	}
}
//맵그리기
void moveMap(int *diceNumber, player *p)
{
	for (int i = 0; i < *diceNumber; i++)
	{
		(p->mapPosition)++;
		if ((p->mapPosition) == 1)
		{
			p->x = 2;
			//p2,p1 값 분리 시간남으면
			p->y = 2;
		}
		else
		{
			if ((p->mapPosition) % (MAPSIZE + 1) == 0 || (p->mapPosition) % (MAPSIZE + 1) == 1)
				p->y = p->y + 3;
			else if ((p->mapPosition) % ((MAPSIZE + 1) * 2) < MAPSIZE + 1) //맵 가로 크기 5 일경우 맵가로크기
				p->x = p->x + 6;
			else if ((p->mapPosition) % ((MAPSIZE + 1) * 2) > MAPSIZE + 1)
				p->x = p->x - 6;
		}
		gotoxy(p->x, p->y);
	}
}

void printLocationP(player *p1, player *p2)
{
	gotoxy(p1->x, p1->y);
	cout << "○" << p1->mapPosition;
	gotoxy(40, 8);
	cout << "p1위치" << p1->mapPosition;
	gotoxy(p2->x, p2->y);
	cout << "●" << p2->mapPosition;
	gotoxy(40, 9);
	cout << "p2위치" << p2->mapPosition;
	Sleep(300);
}
