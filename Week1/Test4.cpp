#include <stdio.h>
#include "MyHeader.h"  // -> 이 헤더를 통해 함수의 위치에 구애받지 않고 실행 할 수 있음. 


int main(void) 
{
	int i,j,k; // 내부 사용 변수 - 습관임수 

	printf("특수문자나 숫자 등 아무거나 입력해보기. \n");
	
	while(1) 
	{
		int key; // 키 값을 입력받기 위한 변수 선언 
		scanf("%c", &key); // 한 문자를 입력받음   문자:%c , 문자열:%s 
		// scanf 함수는 [Enter] 킬 입력의 끝을 검사
		// 따라서 단일 문자 처리시 두번 입력으로 처리 
		if(key == 'z') 
		{
			break; 
		}
		if(key != 13) 
		{
			func1(key); // func1 key의 변수가 func1 함수의 k 매개변수로 
		}
			//키보드 버퍼에 남아있는 [Enter] 처리방법 
	} 
	
	printf(" %c 키를 누르셨네요.\n 종료합니다.", key);
	return 0;
}
