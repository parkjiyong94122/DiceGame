#include"main.h"

int gameResult(player* p1, player* p2)
{
	if ((p1->mapPosition) >= DESTINATION || p2->mapPosition >= DESTINATION)
	{
		gotoxy(8, 35);

		if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition > p2->mapPosition)
			cout << "1p�� �¸�" << endl;

		else if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition < p2->mapPosition)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapPosition >= DESTINATION)
			cout << "1p�� �¸�" << endl;

		else if (p2->mapPosition >= DESTINATION)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapPosition == p2->mapPosition)
			cout << "���º�" << endl;

		return 1;
	}
	else
		return 0;
}