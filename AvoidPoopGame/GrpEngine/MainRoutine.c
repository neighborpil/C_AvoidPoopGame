#include <stdio.h>
#include <Windows.h> //win32 api���
/*
[]

#�ܼ�â ũ��
 1. ȭ�����ũ��
  - �ʺ� : 80
  - ���� : 300
  - ũ�� ���� �� �ؽ�Ʈ �ٹٲ� üũ ����
 2. â ũ��
  - �ʺ� : 40
  - ���� : 25
#Ŀ���� ��ġ
 - �⺻ ansi c������ ���� ����
 - win32api�� �̿��Ͽ� ������ �����ϰ� ����
 - ������� �ʿ�
*/

void gotoxy(int x, int y);

void main()
{
	int posx1, posx2;
	posx1 = 0;
	posx2 = 0;

	while (1)
	{
		//ȭ���� ����� �޼��� �ʿ�
		//�ܼ�â�� cls�� ���
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

		Sleep(100); //Ư���ð����� delay��Ű�� �޼���, ������ millisecond
	}
}

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