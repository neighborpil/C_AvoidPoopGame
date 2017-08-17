#include "Cgrp.h"

void gotoxy(int x, int y)
{
	//api 메서드 setconsoleCursorposition메서드 //커서의 위치를 세팅
	//win32 api -> 공부하는 법 : 메서드의 사용법을 익힌다
	//win32 -> 로직,  알고리즘이나 문법, 메서드의 다양한 사용법
	//HANDLE //현재 윈도우즈나 프로그램을 제어 할 수 있는 주소나 자료형
	COORD CurPos = { x, y }; //좌표
							 //콘솔창의 커서의 위치를 바꾼다
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CurPos);
}

void clearScreen()
{
	//화면을 지우는 메서드 필요
	//콘솔창에 cls를 사용
	system("cls");

	//깜빡임이 심하다.. 왜? 전체 글자 영역을 지우기 때문에
}

void clrScr()
{
	int i = 0;
	for (i = 0; i < 24; i++)
	{
		gotoxy(0, i);
		printf("                                             ");
	}
}

//텍스트 컬러 설정
void setColor(unsigned short color)
{
	//WORD
	/*
	1 파란색(어두움)				6 황토					 11 청록
	2 녹색(어두움)				7 아이보리				 12 빨강
	3 청록색(어두움)				8 회색					 13 핑크
	4 빨강						9 파란색(밝음)			 14 노란
	5 핑크						10 녹색					 15 흰색
	*/
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void sleeped(int second)
{
	//clock(); //현재 시간값을 얻어옴
	int result;
	result = second + clock();

	while (result > clock());
}