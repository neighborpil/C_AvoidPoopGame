#ifndef __CGRP_H__
#define __CGRP_H__

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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



void gotoxy(int x, int y); //Ŀ���� ��ġ �ٲٱ�
void clearScreen(); //ȭ�� �����
void clrScr(); //ȭ�� �����
void setColor(unsigned short color); //�� �ٲٱ�
void sleeped(int second); //������

#endif