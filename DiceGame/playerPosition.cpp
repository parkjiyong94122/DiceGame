#include"main.h"

//������ or ����
int position::moveShortCutOrTrap()
{
	if (mapPosition == 4)
	{
		x = x - 12;
		y = y + 6;
		mapPosition = 10;
		gotoxy(50, 10);
		cout << "������:4���� 10���� �̵�" << endl;
		Sleep(1000);
	}
	else if (mapPosition == 22)
	{
		x = x + 12;
		y = y - 12;
		mapPosition = 8;
		gotoxy(50, 10);
		cout << "����:22���� 8���� �̵� " << endl;
		Sleep(1000);

	}
	else if (mapPosition == 18)
	{
		y = y + 9;
		mapPosition = 29;
		gotoxy(50, 10);
		cout << "������:18���� 29���� �̵� " << endl;
		Sleep(1000);
	}
	else if (mapPosition == 32)
	{
		y = y - 12;
		mapPosition = 20;
		gotoxy(50, 10);
		cout << "����:32���� 20���� �̵� " << endl;
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
			//p2,p1 �� �и� �ð�������
			y = 2;
		}
		else
		{
			if ((mapPosition) % (MAPSIZE + 1) == 0 || (mapPosition) % (MAPSIZE + 1) == 1)
				y = y + 3;
			else if ((mapPosition) % ((MAPSIZE + 1) * 2) < MAPSIZE + 1) //�� ���� ũ�� 5 �ϰ�� �ʰ���ũ��
				x = x + 6;
			else if ((mapPosition) % ((MAPSIZE + 1) * 2) > MAPSIZE + 1)
				x = x - 6;
		}
		gotoxy(x, y);
	}
}