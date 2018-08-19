#include"main.h"

int gameResult(player* p1, player* p2)
{
	if ((p1->mapPosition) >= DESTINATION || p2->mapPosition >= DESTINATION)
	{
		gotoxy(8, 35);

		if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition > p2->mapPosition)
			cout << "1p啊 铰府" << endl;

		else if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition < p2->mapPosition)
			cout << "2p啊 铰府" << endl;

		else if (p1->mapPosition >= DESTINATION)
			cout << "1p啊 铰府" << endl;

		else if (p2->mapPosition >= DESTINATION)
			cout << "2p啊 铰府" << endl;

		else if (p1->mapPosition == p2->mapPosition)
			cout << "公铰何" << endl;

		return 1;
	}
	else
		return 0;
}