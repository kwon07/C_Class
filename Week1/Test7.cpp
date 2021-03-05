#include <stdio.h>
#include <conio.h> //getch()함수를 이용하기 위해 사용하는 헤더(?) 
void CharPos(char buf[], int n); //n : 인덱스 

//scanf 함수와 getch() 함수를 이용하여 숫자를 누를때 그 숫자의 위치에 해당되는 문자열을 출력하기. 
//ex)Good_morning [공백은_로 표시]  2를 입력시 o 가 나옴 

int main(void)
{
	char buf[1024];
	int i,j,k;	//단일 키값을 되돌림. (getch는 숫자는 뭐를 눌렀든 입력된 것을 그대로 char 값으로 되돌림. )
	scanf("%s", buf); //[Enter] 키를 눌러서 값을 되돌림 
	printf("입력 문자열은 %s 입니다.\n\n", buf);
	
	while(1)
	{
		//getch()는 scanf와 같은 입력 함수 
		char ch = getch(); //단일 키값을 되돌림. (getch는 숫자는 뭐를 눌렀든 입력된 것을 그대로 char 값으로 되돌림. )
		if(ch<48 || ch>57) break; //아스키코드 48~57은 아라비아숫자(0~9) 즉 48~57(0~9) 외의 다른 것을 입력할때 반복문 탈출, 프로그램 종료. 
		CharPos(buf, ch-48); // ch-48 : 숫자 키값을 인덱스 값으로 변환 -> 48-48 = 0 , 49 - 48 = 1 ..... , 57 - 48 = 9       
	} 
	 	
	return 0;  
}

void CharPos(char buf[], int n)
{ 
	printf("%s (%d) ---> %c\n\n", buf, n, *(buf+n)); // *(buf+n)은 그 (인덱스)숫자 위치에 해당되는 문자열 
}


