#include <stdio.h>

void main()
{
	int key;

	while (1) //���ӿ����� ���� ����
	{
		//Ű �Է�
		//kbhit() // Ű���ۿ� ���� �ִ°�?
		//Ű �Է��� �ϰ� �Ǹ� Ű �Է°��� �����ϴ� Ű���ۿ� �ش� ascii �ڵ尡 ����
		while (kbhit())
		{
			printf("�ԷµǾ���");
			//getch() //Ű ���ۿ��� char(ascii)�� ���� �ϳ� �о�´�
			//���� �Ŀ��� Ű���ۿ� �ش� ���� ����
			key = getch();
			printf("%d", key);
			
		}
		//75 <- 77-> 121y
	}

}