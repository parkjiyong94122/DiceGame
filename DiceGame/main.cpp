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

// 6. 지름길,함정 만들기
void moveShortCutOrTrap(int *mapPoint, int *x, int *y)
{
	if (*mapPoint == 4)
	{
		*x = *x - 12;
		*y = *y + 6;
		*mapPoint = 10;
		gotoxy(50, 10);
		cout << "지름길:4에서 10으로 이동" << endl;
		Sleep(1000);
	}
	else if (*mapPoint == 22)
	{
		*x = *x + 12;
		*y = *y - 12;
		*mapPoint = 8;
		gotoxy(50, 10);
		cout << "함정:22에서 8으로 이동 " << endl;
		Sleep(1000);

	}
	else if (*mapPoint == 18)
	{
		*y = *y + 9;
		*mapPoint = 29;
		gotoxy(50, 10);
		cout << "지름길:18에서 29으로 이동 " << endl;
		Sleep(1000);
	}
	else if (*mapPoint == 32)
	{
		*y = *y - 12;
		*mapPoint = 20;
		gotoxy(50, 10);
		cout << "함정:32에서 20으로 이동 " << endl;
		Sleep(1000);
	}
}

// 1. 주사위 게임을 할 맵을 만든다
void drawmap()
{
	int i, j;
	printf("시작----->\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			printf("┌─┐");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("│  │");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("└─┘");
		}
		printf("\n");               //1행

		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("┌─┐");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("│  │");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("└─┘");
		}                             //2행

		printf("\n");
		for (i = 0; i < 5; i++)
		{
			printf("┌─┐");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("│  │");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("└─┘");
		}
		printf("\n");                  //3행

		for (i = 0; i < 1; i++)
		{
			printf("┌─┐");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("│  │");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("└─┘");
		}
		printf("\n");                   //4행
	}
}

int main(void)
{
	int i;
	int j;
	srand(time(NULL));
	int diceNumber1, diceNumber2;
	char dice = 'y';
	int p1Position = 0;	// 초기 맵
	int	p2Position = 0;	// 초기 맵
	int x1 = 0, y1 = 0; // 초기좌표 
	int x2 = 0, y2 = 0;// 


	drawmap();
	while (1)
	{
		// 2.주사위 던지기
		if (dice == 'y')
		{
			gotoxy(40, 5);
			cout << "1p의 차례입니다 주사위를 굴려주세요(y)" << endl;
			gotoxy(40, 6);
			cin >> dice;
			system("cls");
			drawmap();
			diceNumber1 = rand() % 6 + 1;
			gotoxy(40, 7);
			cout << "주사위의 나온 수 :" << diceNumber1 << endl;

			// 3. 주사위 눈에 따라 말 움직이기
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
					else if (p1Position % 12 < 6) //맵 가로 크기 5 일경우 맵가로크기
						x1 = x1 + 6;
					else if (p1Position % 12 > 6)
						x1 = x1 - 6;
				}
				gotoxy(x1, y1);

			}
			cout << "○" << p1Position;
			gotoxy(40, 8);
			cout << "p1위치" << p1Position;
			Sleep(300);

			moveShortCutOrTrap(&p1Position, &x1, &y1);
			gotoxy(x1, y1);
			cout << "○" << p1Position;
			gotoxy(40, 8);
			cout << "p1위치" << p1Position;

			Sleep(300);

			// 4. 2p 생성
			gotoxy(40, 5);
			cout << "2p의 차례입니다 주사위를 굴려주세요(y)" << endl;
			gotoxy(40, 6);
			cin >> dice;
			diceNumber2 = rand() % 6 + 1;
			gotoxy(40, 7);
			cout << "주사위의 나온 수 :" << diceNumber2 << endl;

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
					else if (p2Position % 12 < 6) //맵 가로 크기 5 일경우 맵가로크기
						x2 = x2 + 6;
					else if (p2Position % 12 > 6)
						x2 = x2 - 6;
				}
				gotoxy(x2, y2);
			}
			cout << "●" << p2Position;
			gotoxy(40, 9);
			cout << "p2위치" << p2Position;
			Sleep(300);

			moveShortCutOrTrap(&p2Position, &x2, &y2);
			gotoxy(x2, y2);
			cout << "●" << p2Position;
			gotoxy(40, 9);
			cout << "p2위치" << p2Position;

			Sleep(300);


		}

		// 5. 승리,패배 판별
		if (p1Position >= 36)
		{
			p1Position = 36;
			gotoxy(8, 35);
			cout << "1p가 승리";
			break;
		}
		else if (p2Position >= 36)
		{
			p2Position = 36;
			gotoxy(8, 35);
			cout << "2p가 승리";
			break;
		}
		if (p1Position >= 36 && p2Position >= 36 && p1Position > p2Position)
		{
			gotoxy(8, 35);
			cout << "1p가 승리";
			break;
		}

		else if (p1Position >= 36 && p2Position >= 36 && p2Position > p1Position)
		{
			gotoxy(8, 35);
			cout << "2p가 승리";
			break;
		}

	}
}
