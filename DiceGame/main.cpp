#include"main.h"

int main(void)
{

	srand(time(NULL));
	position p1, p2;
	Dice dice;

	drawmap();

	while (1)
	{

		if (dice.choiceDarwDicep1() == 'y') // y 실행
		{
			dice.drawDice(); //랜덤한 수 설정
			dice.print();	//랜덤한 수 출력

			p1.moveMap(&dice);

			printLocationP(&p1, &p2);

			if(p1.moveShortCutOrTrap()==1) //return 값받아서 1이면 아래 실행 
				printLocationP(&p1, &p2);

			dice.dice = 0; // 초기화
		}


		if (dice.choiceDarwDiceP2() == 'y')
		{
			dice.drawDice();	//랜덤한 수 설정
			dice.print();	//랜덤한 수 출력

			p2.moveMap(&dice);

			printLocationP(&p1, &p2);

			if (p2.moveShortCutOrTrap() == 1) //return 값받아서 1이면 아래 실행 
				printLocationP(&p1, &p2);

			Sleep(300);

			dice.dice = 0; // 초기화
		}

		if (gameResult(&p1, &p2) == 1)
			break;
	}

	return 0;
}