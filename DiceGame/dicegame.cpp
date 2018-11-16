#include"main.h"


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

			printLocationP(&p1, &p2);

			moveShortCutOrTrap(&p1);

			printLocationP(&p1, &p2);

			dice = 0; // 초기화
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

		//같이들어올 경우 더 멀리간 사람이 승리
	}
}