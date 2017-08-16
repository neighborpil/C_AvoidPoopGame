#include <stdio.h>
#include <Windows.h> //win32 api사용
/*
[]

#콘솔창 크기
 1. 화면버퍼크기
  - 너비 : 80
  - 높이 : 300
  - 크기 조정 시 텍스트 줄바꿈 체크 해제
 2. 창 크기
  - 너비 : 40
  - 높이 : 25
#커서의 위치
 - 기본 ansi c에서는 지원 안함
 - win32api를 이용하여 강제로 지원하게 만듬
 - 헤더파일 필요
*/

void gotoxy(int x, int y);

void main()
{
	int posx1, posx2;
	posx1 = 0;
	posx2 = 0;

	while (1)
	{
		//화면을 지우는 메서드 필요
		//콘솔창에 cls를 사용
		system("cls");
		posx1++;
		posx2++;

		if (posx1 > 20)
			posx1 = 20;
		if (posx2 > 20)
			posx2 = 20;

		gotoxy(10 + posx1, 5);
		printf("--");

		gotoxy(5 + posx2, 20);
		printf("test");

		Sleep(100); //특정시간동안 delay시키는 메서드, 단위는 millisecond
	}
}

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