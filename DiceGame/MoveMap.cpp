#include"main.h"

//������ or ����
void moveShortCutOrTrap(player* p)
{
	if (p->mapPosition == 4)
	{
		p->x = p->x - 12;
		p->y = p->y + 6;
		p->mapPosition = 10;
		gotoxy(50, 10);
		cout << "������:4���� 10���� �̵�" << endl;
		Sleep(1000);
	}
	else if (p->mapPosition == 22)
	{
		p->x = p->x + 12;
		p->y = p->y - 12;
		p->mapPosition = 8;
		gotoxy(50, 10);
		cout << "����:22���� 8���� �̵� " << endl;
		Sleep(1000);

	}
	else if (p->mapPosition == 18)
	{
		p->y = p->y + 9;
		p->mapPosition = 29;
		gotoxy(50, 10);
		cout << "������:18���� 29���� �̵� " << endl;
		Sleep(1000);
	}
	else if (p->mapPosition == 32)
	{
		p->y = p->y - 12;
		p->mapPosition = 20;
		gotoxy(50, 10);
		cout << "����:32���� 20���� �̵� " << endl;
		Sleep(1000);
	}
}
//�ʱ׸���
void moveMap(int *diceNumber, player *p)
{
	for (int i = 0; i < *diceNumber; i++)
	{
		(p->mapPosition)++;
		if ((p->mapPosition) == 1)
		{
			p->x = 2;
			//p2,p1 �� �и� �ð�������
			p->y = 2;
		}
		else
		{
			if ((p->mapPosition) % (MAPSIZE + 1) == 0 || (p->mapPosition) % (MAPSIZE + 1) == 1)
				p->y = p->y + 3;
			else if ((p->mapPosition) % ((MAPSIZE + 1) * 2) < MAPSIZE + 1) //�� ���� ũ�� 5 �ϰ�� �ʰ���ũ��
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
	cout << "��" << p1->mapPosition;
	gotoxy(40, 8);
	cout << "p1��ġ" << p1->mapPosition;
	gotoxy(p2->x, p2->y);
	cout << "��" << p2->mapPosition;
	gotoxy(40, 9);
	cout << "p2��ġ" << p2->mapPosition;
	Sleep(300);
}
