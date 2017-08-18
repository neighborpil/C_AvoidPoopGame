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
		//키 입력을 받을때마다 위치를 변경시킨다

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

		//윈도우즈32api에서 지원되는 메서드
		//Sleep(100); //특정시간동안 delay시키는 메서드, 단위는 millisecond
		sleeped(100);
	}
}
