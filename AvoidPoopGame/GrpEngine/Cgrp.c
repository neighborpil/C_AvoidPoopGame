#include "Cgrp.h"

void gotoxy(int x, int y)
{
	//api �޼��� setconsoleCursorposition�޼��� //Ŀ���� ��ġ�� ����
	//win32 api -> �����ϴ� �� : �޼����� ������ ������
	//win32 -> ����,  �˰����̳� ����, �޼����� �پ��� ����
	//HANDLE //���� ������� ���α׷��� ���� �� �� �ִ� �ּҳ� �ڷ���
	COORD CurPos = { x, y }; //��ǥ
							 //�ܼ�â�� Ŀ���� ��ġ�� �ٲ۴�
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), CurPos);
}

void clearScreen()
{
	//ȭ���� ����� �޼��� �ʿ�
	//�ܼ�â�� cls�� ���
	system("cls");

	//�������� ���ϴ�.. ��? ��ü ���� ������ ����� ������
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

//�ؽ�Ʈ �÷� ����
void setColor(unsigned short color)
{
	//WORD
	/*
	1 �Ķ���(��ο�)				6 Ȳ��					 11 û��
	2 ���(��ο�)				7 ���̺���				 12 ����
	3 û�ϻ�(��ο�)				8 ȸ��					 13 ��ũ
	4 ����						9 �Ķ���(����)			 14 ���
	5 ��ũ						10 ���					 15 ���
	*/
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void sleeped(int second)
{
	//clock(); //���� �ð����� ����
	int result;
	result = second + clock();

	while (result > clock());
}