#include"main.h"

int main(void)
{

	srand(time(NULL));
	position p1, p2;
	Dice dice;

	drawmap();

	while (1)
	{

		if (dice.choiceDarwDicep1() == 'y') // y ����
		{
			dice.drawDice(); //������ �� ����
			dice.print();	//������ �� ���

			p1.moveMap(&dice);

			printLocationP(&p1, &p2);

			if(p1.moveShortCutOrTrap()==1) //return ���޾Ƽ� 1�̸� �Ʒ� ���� 
				printLocationP(&p1, &p2);

			dice.dice = 0; // �ʱ�ȭ
		}


		if (dice.choiceDarwDiceP2() == 'y')
		{
			dice.drawDice();	//������ �� ����
			dice.print();	//������ �� ���

			p2.moveMap(&dice);

			printLocationP(&p1, &p2);

			if (p2.moveShortCutOrTrap() == 1) //return ���޾Ƽ� 1�̸� �Ʒ� ���� 
				printLocationP(&p1, &p2);

			Sleep(300);

			dice.dice = 0; // �ʱ�ȭ
		}

		if (gameResult(&p1, &p2) == 1)
			break;
	}

	return 0;
}