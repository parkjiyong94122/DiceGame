#include <stdio.h>									
#include <Windows.h>									
#include <conio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// 6. ������,���� �����
void moveShortCutOrTrap(int *mapPoint, int *x, int *y)
{
	if (*mapPoint == 4)
	{
		*x = *x - 12;
		*y = *y + 6;
		*mapPoint = 10;
		gotoxy(50, 10);
		cout << "������:4���� 10���� �̵�" << endl;
		Sleep(1000);
	}
	else if (*mapPoint == 22)
	{
		*x = *x + 12;
		*y = *y - 12;
		*mapPoint = 8;
		gotoxy(50, 10);
		cout << "����:22���� 8���� �̵� " << endl;
		Sleep(1000);

	}
	else if (*mapPoint == 18)
	{
		*y = *y + 9;
		*mapPoint = 29;
		gotoxy(50, 10);
		cout << "������:18���� 29���� �̵� " << endl;
		Sleep(1000);
	}
	else if (*mapPoint == 32)
	{
		*y = *y - 12;
		*mapPoint = 20;
		gotoxy(50, 10);
		cout << "����:32���� 20���� �̵� " << endl;
		Sleep(1000);
	}
}

// 1. �ֻ��� ������ �� ���� �����
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

int main(void)
{
	int i;
	int j;
	srand(time(NULL));
	int diceNumber1, diceNumber2;
	char dice = 'y';
	int p1Position = 0;	// �ʱ� ��
	int	p2Position = 0;	// �ʱ� ��
	int x1 = 0, y1 = 0; // �ʱ���ǥ 
	int x2 = 0, y2 = 0;// 


	drawmap();
	while (1)
	{
		// 2.�ֻ��� ������
		if (dice == 'y')
		{
			gotoxy(40, 5);
			cout << "1p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
			gotoxy(40, 6);
			cin >> dice;
			system("cls");
			drawmap();
			diceNumber1 = rand() % 6 + 1;
			gotoxy(40, 7);
			cout << "�ֻ����� ���� �� :" << diceNumber1 << endl;

			// 3. �ֻ��� ���� ���� �� �����̱�
			for (int i = 0; i < diceNumber1; i++)
			{
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
			cout << "��" << p1Position;
			gotoxy(40, 8);
			cout << "p1��ġ" << p1Position;
			Sleep(300);

			moveShortCutOrTrap(&p1Position, &x1, &y1);
			gotoxy(x1, y1);
			cout << "��" << p1Position;
			gotoxy(40, 8);
			cout << "p1��ġ" << p1Position;

			Sleep(300);

			// 4. 2p ����
			gotoxy(40, 5);
			cout << "2p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
			gotoxy(40, 6);
			cin >> dice;
			diceNumber2 = rand() % 6 + 1;
			gotoxy(40, 7);
			cout << "�ֻ����� ���� �� :" << diceNumber2 << endl;

			for (int i = 0; i < diceNumber2; i++)
			{
				p2Position++;
				if (x2 == 0 && y2 == 0)
				{
					x2 = 2;
					y2 = 2;
				}
				else
				{

					if (p2Position % 6 == 0 || p2Position % 6 == 1)
						y2 = y2 + 3;
					else if (p2Position % 12 < 6) //�� ���� ũ�� 5 �ϰ�� �ʰ���ũ��
						x2 = x2 + 6;
					else if (p2Position % 12 > 6)
						x2 = x2 - 6;
				}
				gotoxy(x2, y2);
			}
			cout << "��" << p2Position;
			gotoxy(40, 9);
			cout << "p2��ġ" << p2Position;
			Sleep(300);

			moveShortCutOrTrap(&p2Position, &x2, &y2);
			gotoxy(x2, y2);
			cout << "��" << p2Position;
			gotoxy(40, 9);
			cout << "p2��ġ" << p2Position;

			Sleep(300);


		}

		// 5. �¸�,�й� �Ǻ�
		if (p1Position >= 36)
		{
			p1Position = 36;
			gotoxy(8, 35);
			cout << "1p�� �¸�";
			break;
		}
		else if (p2Position >= 36)
		{
			p2Position = 36;
			gotoxy(8, 35);
			cout << "2p�� �¸�";
			break;
		}
		if (p1Position >= 36 && p2Position >= 36 && p1Position > p2Position)
		{
			gotoxy(8, 35);
			cout << "1p�� �¸�";
			break;
		}

		else if (p1Position >= 36 && p2Position >= 36 && p2Position > p1Position)
		{
			gotoxy(8, 35);
			cout << "2p�� �¸�";
			break;
		}

	}
}
