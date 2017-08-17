#ifndef __CGRP_H__
#define __CGRP_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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



void gotoxy(int x, int y); //커서의 위치 바꾸기
void clearScreen(); //화면 지우기
void clrScr(); //화면 지우기
void setColor(unsigned short color); //색 바꾸기
void sleeped(int second); //딜레이

#endif