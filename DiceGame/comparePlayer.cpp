#include"main.h"

int gameResult(position* p1, position* p2)
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

void printLocationP(position *p1, position *p2)
{
	gotoxy(p1->x, p1->y);
	cout << "��" << p1->mapPosition;
	gotoxy(40, 8);
	cout << "p1��ġ" << p1->mapPosition;
	gotoxy(p2->x, p2->y);
	cout << "��" << p2->mapPosition;
	gotoxy(40, 9);
	cout << "p2��ġ" << p2->mapPosition;
	Sleep(300);
}
