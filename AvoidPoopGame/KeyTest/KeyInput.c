#include <stdio.h>

void main()
{
	int key;

	while (1) //게임에서의 메인 루프
	{
		//키 입력
		//kbhit() // 키버퍼에 값이 있는가?
		//키 입력을 하게 되면 키 입력값을 저장하는 키버퍼에 해당 ascii 코드가 들어간다
		while (kbhit())
		{
			printf("입력되었음");
			//getch() //키 버퍼에서 char(ascii)형 값을 하나 읽어온다
			//읽은 후에는 키버퍼에 해당 내용 삭제
			key = getch();
			printf("%d", key);
			
		}
		//75 <- 77-> 121y
	}

}