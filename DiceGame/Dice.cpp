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
	cout << "주사위의 나온 수 :" << diceNumber << endl;
}

//주사위를 던질 지 선택 
char Dice::choiceDarwDicep1()
{
	gotoxy(40, 5);
	cout <<"1p의 차례입니다 주사위를 굴려주세요(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}
char Dice::choiceDarwDiceP2()
{
	gotoxy(40, 5);
	cout << "2p의 차례입니다 주사위를 굴려주세요(y)" << endl;
	gotoxy(40, 6);
	cin >> dice;
	system("cls");
	return dice;
}

