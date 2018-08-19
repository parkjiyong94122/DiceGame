#include"main.h"

int gameResult(position* p1, position* p2)
{
	if ((p1->mapPosition) >= DESTINATION || p2->mapPosition >= DESTINATION)
	{
		gotoxy(8, 35);

		if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition > p2->mapPosition)
			cout << "1p°¡ ½Â¸®" << endl;

		else if (p1->mapPosition >= DESTINATION && p2->mapPosition >= DESTINATION && p1->mapPosition < p2->mapPosition)
			cout << "2p°¡ ½Â¸®" << endl;

		else if (p1->mapPosition >= DESTINATION)
			cout << "1p°¡ ½Â¸®" << endl;

		else if (p2->mapPosition >= DESTINATION)
			cout << "2p°¡ ½Â¸®" << endl;

		else if (p1->mapPosition == p2->mapPosition)
			cout << "¹«½ÂºÎ" << endl;

		return 1;
	}
	else
		return 0;
}

void printLocationP(position *p1, position *p2)
{
	gotoxy(p1->x, p1->y);
	cout << "¡Û" << p1->mapPosition;
	gotoxy(40, 8);
	cout << "p1À§Ä¡" << p1->mapPosition;
	gotoxy(p2->x, p2->y);
	cout << "¡Ü" << p2->mapPosition;
	gotoxy(40, 9);
	cout << "p2À§Ä¡" << p2->mapPosition;
	Sleep(300);
}
