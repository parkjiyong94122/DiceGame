#include"main.h"

void drawmap()
{
	int i, j;
	printf("����----->\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("��  ��");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");               //1��

		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("��  ��");
		}
		printf("\n");
		printf("\t\t\t");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}                             //2��

		printf("\n");
		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("��  ��");
		}
		printf("\n");

		for (i = 0; i < 5; i++)
		{
			printf("������");
		}
		printf("\n");                  //3��

		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("��  ��");
		}
		printf("\n");
		for (i = 0; i < 1; i++)
		{
			printf("������");
		}
		printf("\n");                   //4��
	}
}
