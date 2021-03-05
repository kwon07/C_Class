#include <stdio.h>
#include <conio.h> //getch()함수를 이용하기 위해 사용하는 헤더(?) 
void ConvertChr(char buf[]);

int main(void)
{
	char buf[1024];
	int i,j,k;	
	while(1)
	{
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
	for (i=0; buf[i] != 0; i++) //buf[i] != 0 --> 현재 위 메인을 보면 buf[1024] ->1024만큼의 크기를 갖는다. 즉 크기가 0 이 아니다. 그러므로 이 함수안의  반복문을 수행 한다. 결론:배열의 크기가 0만 아니면 됨 
	{
		char a = buf[i]; //a라는 변수에 buf[i]의 데이터를 저장시킴 
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




