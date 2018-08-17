#include <stdio.h>									
#include <Windows.h>									
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include"player.h"

#define MAPSIZE 5
#define DESTINATION 36


using namespace std;
//��ǥ�����Լ�
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

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
void drawmap()
{
	int i, j;
	printf("����----->\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("��  ��");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");               //1��

		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("��  ��");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}                             //2��

		printf("\n");
		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("��  ��");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");                  //3��

		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("��  ��");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");                   //4��
	}
}

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

void drawDice(int *diceNumber)
{
	gotoxy(0, 0);
	drawmap();
	*diceNumber = rand() % 6 + 1;
	gotoxy(40, 7);
	cout << "�ֻ����� ���� �� :" << *diceNumber << endl;
}

int gameResult(player* p1, player* p2)
{
	if ((p1->mapPosition) >= DESTINATION || p2->mapPosition >= DESTINATION)
	{
		gotoxy(8, 35);

		if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition > p2->mapPosition)
			cout << "1p�� �¸�" << endl;

		else if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition < p2->mapPosition)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapPosition >= DESTINATION)
			cout << "1p�� �¸�" << endl;

		else if (p2->mapPosition >= DESTINATION)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapPosition == p2->mapPosition)
			cout << "���º�" << endl;

		return 1;
	}
	else
		return 0;
}

char choiceDarwDiceP1()
{
	char dice;
	gotoxy(40, 5);
	cout << "1p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}
char choiceDarwDiceP2()
{
	char dice;
	gotoxy(40, 5);
	cout << "2p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}



int main(void)
{

	srand(time(NULL));
	int diceNumber;
	char dice;
	player p1, p2;

	drawmap();

	while (1)
	{

		dice = choiceDarwDiceP1();

		if (dice == 'y')
		{
			drawDice(&diceNumber);

			moveMap(&diceNumber, &p1);
			/*for (int i = 0; i < diceNumber1; i++)
			{��
			p1Position++;
			if (x1 == 0 && y1 == 0)
			{
			x1 = 2;
			y1 = 2;
			}
			else
			{

			if (p1Position % 6 == 0 || p1Position % 6 == 1)
			y1 = y1 + 3;
			else if (p1Position % 12 < 6) //�� ���� ũ�� 5 �ϰ�� �ʰ���ũ��
			x1 = x1 + 6;
			else if (p1Position % 12 > 6)
			x1 = x1 - 6;
			}
			gotoxy(x1, y1);

			}
			*/

			printLocationP(&p1, &p2);

			moveShortCutOrTrap(&p1);

			printLocationP(&p1, &p2);

			dice = 0; // �ʱ�ȭ
		}

		dice = choiceDarwDiceP2();

		if (dice == 'y')
		{
			drawDice(&diceNumber);

			moveMap(&diceNumber, &p2);

			printLocationP(&p1, &p2);

			moveShortCutOrTrap(&p2);

			printLocationP(&p1, &p2);

			Sleep(300);

		}

		if (gameResult(&p1, &p2) == 1)
			break;

		//���̵��� ��� �� �ָ��� ����� �¸�
	}
}