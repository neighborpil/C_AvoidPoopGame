#include <stdio.h>
#include "Cgrp.h"
#include "CKeyproc.h"

int posx1, posx2;

void main()
{
	int i, j;

	posx1 = 00;
	posx2 = 20;

	while (1)
	{
		keyProcess();
		//Ű �Է��� ���������� ��ġ�� �����Ų��

		clrScr();

		posx1++;
		//posx2++;

		if (posx1 >= 40)
			posx1 = 0;

		setColor(15);
		gotoxy(0, 0);
		printf("----------------------------------------");

		for (i = 1; i <= 22; i++)
		{
			gotoxy(0, i);
			printf("|                                      |");
		}
		gotoxy(0, 23);
		printf("----------------------------------------");


		setColor(14);
		gotoxy(posx1, 5);
		printf("--");

		setColor(10);
		gotoxy(posx2, 20);
		printf("test");

		//��������32api���� �����Ǵ� �޼���
		//Sleep(100); //Ư���ð����� delay��Ű�� �޼���, ������ millisecond
		sleeped(100);
	}
}
