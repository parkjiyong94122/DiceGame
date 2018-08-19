#include"main.h"

void drawDice(int *diceNumber)
{
	gotoxy(0, 0);
	drawmap();
	*diceNumber = rand() % 6 + 1;
	gotoxy(40, 7);
	cout << "주사위의 나온 수 :" << *diceNumber << endl;
}

char choiceDarwDiceP1()
{
	char dice;
	gotoxy(40, 5);
	cout << "1p의 차례입니다 주사위를 굴려주세요(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}
char choiceDarwDiceP2()
{
	char dice;
	gotoxy(40, 5);
	cout << "2p의 차례입니다 주사위를 굴려주세요(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}
