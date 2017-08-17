#include <stdio.h>
#include "Cgrp.h"


void main()
{
	int i, j;

	int posx1, posx2;
	posx1 = 0;
	posx2 = 0;

	while (1)
	{
		clrScr();

		posx1++;
		posx2++;

		if (posx1 > 20)
			posx1 = 20;
		if (posx2 > 20)
			posx2 = 20;

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
		gotoxy(10 + posx1, 5);
		printf("--");

		setColor(10);
		gotoxy(5 + posx2, 20);
		printf("test");

		//윈도우즈32api에서 지원되는 메서드
		//Sleep(100); //특정시간동안 delay시키는 메서드, 단위는 millisecond
		sleeped(100);
	}
}
