#include"main.h"

void Dice::drawDice()
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

//�ֻ����� ���� �� ���� 
char Dice::choiceDarwDicep1()
{
	gotoxy(40, 5);
	cout <<"1p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}
char Dice::choiceDarwDiceP2()
{
	gotoxy(40, 5);
	cout << "2p�� �����Դϴ� �ֻ����� �����ּ���(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}

