#include"main.h"

void drawDice(int *diceNumber)
{
	gotoxy(0, 0);
	drawmap();
	*diceNumber = rand() % 6 + 1;
	gotoxy(40, 7);
	cout << "�ֻ����� ���� �� :" << *diceNumber << endl;
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
