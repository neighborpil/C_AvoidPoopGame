#include <stdio.h>
#include "CKeyproc.h"
int key;

extern int posx2;

void keyProcess()
{
	while (kbhit())
	{
		key = getch();

		switch (key)
		{
		case 75: //<-
			posx2--;
			break;

		case 77: //->
			posx2++;
			break;
		}
	}
}