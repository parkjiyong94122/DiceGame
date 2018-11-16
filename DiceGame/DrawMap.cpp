#include"main.h"

void drawmap()
{
	int i, j;
	printf("矫累----->\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			printf("ΓΑΔ");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("Β  Β");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("ΖΑΕ");
		}
		printf("\n");               //1青

		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("ΓΑΔ");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("Β  Β");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("ΖΑΕ");
		}                             //2青

		printf("\n");
		for (i = 0; i < 5; i++)
		{
			printf("ΓΑΔ");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("Β  Β");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("ΖΑΕ");
		}
		printf("\n");                  //3青

		for (i = 0; i < 1; i++)
		{
			printf("ΓΑΔ");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("Β  Β");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("ΖΑΕ");
		}
		printf("\n");                   //4青
	}
}
