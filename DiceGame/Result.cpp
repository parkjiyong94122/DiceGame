#include"main.h"


int arriveLocation(location* p1, location* p2)
{
	if ((p1->mapLocation) >= DESTINATION || p2->mapLocation >= DESTINATION)
	{
		gotoxy(15, 40);

		if (p1->mapLocation >= DESTINATION && p2->mapLocation >= DESTINATION && p1->mapLocation > p2->mapLocation)
			cout << "1p�� �¸�" << endl;

		else if (p1->mapLocation >= DESTINATION && p2->mapLocation >= DESTINATION && p1->mapLocation < p2->mapLocation)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapLocation >= DESTINATION)
			cout << "1p�� �¸�" << endl;

		else if (p2->mapLocation >= DESTINATION)
			cout << "2p�� �¸�" << endl;

		else if (p1->mapLocation == p2->mapLocation)
			cout << "���º�" << endl;

		return 1;
	}
	else
		return 0;
}

