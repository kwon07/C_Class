#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> // <-- atoi를 쓰기위해서 써줘야하는 헤더. 

// fgets 함수와 atoi 함수를 이용하여 키보드로부터 숫자 키를 입력받고
// 이를 10진 정수로 변환하는 프로그램을 작성하세요.


int main(void) 
{ 

	char str1[30]="Your favorite language is "; // null 문자 포함 27문자. 
	char str2[10]; 

	int num;
	char str3[30];

	
	fputs("What is your favorite computer lanaguage ? : ", stdout); 
	fgets(str2, sizeof(str2), stdin); 
	
	strcat(str1, str2); 
	printf("생성된 문자열 : %s \n", str1);


	fputs("숫자를 입력해보세요. : ", stdout); 
	fgets(str3, sizeof(str3), stdin); //stdin은 file에서 입력받기 위한 함수 
	num = atoi(str3);
	printf("10진정수 : %d \n", num);

	return 0; 
}
 
//int Prompt (char *pt, int *ret);
// -Pt로 전달된 문자열을 출력하고(안내문자) 입력된 정수문자열을 변화하여 ret값으로 반환
// + 2개의 값 입력 처리,  즉 입력할 값은 2개 -> 이 2개를 한꺼번에 처리 한다는 것 
// [메인]A=Prompt("입력하세요:", &r); r->return값 
//Scanf("%d", &r), A=r  
//  A=Prompt("입력하세요",&r)   <-- 스캔 함수와의 차이점 




