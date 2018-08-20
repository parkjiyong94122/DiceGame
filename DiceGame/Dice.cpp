#include"main.h"

void Dice::throwDice()
{
	gotoxy(0, 0);
	drawmap();
	diceNumber=rand() % 6 + 1;
}

void Dice::print()
{
	gotoxy(40, 7);
	cout << "�ֻ����� ���� �� :" << diceNumber << endl;
}

void Dice::initThrowDice()
{
	play = 0;
}

char Dice::choiceThorwDicep1()
{
	gotoxy(40, 5);
	cout << "1p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> play;
	system("cls");
	return play;
}
char Dice::choiceThrowDiceP2()
{
	gotoxy(40, 5);
	cout << "2p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> play;
	system("cls");
	return play;
}
int Dice::at(int index)
{
	if (index <= 0 || index > 6)
		return -1;
	else
		return diceNumber;
}

