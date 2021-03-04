#include <stdio.h>
#include <conio.h> //getch()함수를 이용하기 위해 사용하는 헤더(?) 
void ConvertChr(char buf[]);

int main(void)
{
	char buf[1024];
	int i,j,k;	
	while(1)
	{
		//getch()는 scanf와 같은 입력 함수 
		char ch = getch(); //단일 키값을 되돌림. (getch는 숫자는 뭐를 눌렀든 입력된 것을 그대로 char 값으로 되돌림. )
		scanf("%s", buf); //[Enter] 키를 눌러서 값을 되돌림 
		printf("입력 문자열은 %s 입니다.\n\n\n", buf);
		ConvertChr(buf);
		printf("\n\n");
	} 
	 	
	return 0;  
}

void ConvertChr(char buf[])
{
	int i,j,k;	
	printf("변환된 문자들 (대문자->소문자, 소문자->대문자) : ");
	for (i=0; buf[i] != 0; i++)
	{
		char a = buf[i]; //a라는 변수에 buf[i]에 데이터를 저장시킴 
		if ((a>96) && (a<123)) //a가 소문자이면 //대문자 변환 (아스키 코드 -> 97~122:소문자) 
		{
	 	   a -= 32;//대문자 변환 32를 빼는 이유 ex) 97은 소문자 a를 의미 32를 빼면 아스키코드65가 됨. 65는 대문자 A를 의미 나머지 숫자도 이와동 
	    } 
		else if ((a>64) && (a<123))
		{
	 	   a += 32;//소문자 변환
	    }
		printf("%c  ", a);
	}
}

