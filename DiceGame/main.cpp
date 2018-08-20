#include"main.h"

int main(void)
{
	srand(time(NULL));
	location p1, p2;
	Dice play;
	drawmap();

	while (1)
	{
		if (play.choiceThorwDicep1() == 'y') 
		{
			play.throwDice(); 
			play.print();	

			p1.moveMap(&play);

			p1.printLocationP(&p2);

			if(p1.moveShortCutOrTrap()==1) 
				p1.printLocationP(&p2);

			play.initThrowDice(); 
		}

		if (play.choiceThrowDiceP2() == 'y')
		{
			play.throwDice();	
			play.print();	

			p2.moveMap(&play);

			p1.printLocationP(&p2);

			if (p2.moveShortCutOrTrap() == 1) 
				p1.printLocationP(&p2);

			play.initThrowDice(); 
		}

		if (arriveLocation(&p1, &p2) == 1)
			break;
	}

	return 0;
}