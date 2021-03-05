#include <stdio.h>  // <-- 헤더파일 header


int main(void)  //<-- 2~6줄 { } 중괄호 열고 닫기 중요! body 
{
	printf("Good Morning!. \n"); //printf <-- 함수 (function)  즉, C언어는 함수로 이루어진 언어라고 함 -- 세미콜론 필수
//	printf("안녕하세요. Hi");    // \n <-- 줄바꿈해주기 
	printf("Hello 권 형 준! \n"); 
	
	printf("%d \n", 1234);
	printf("%d %d \n", 10, 20);
	
	printf("My age : %d \n", 20);
	printf("%d is my point\n", 100);
	printf("Good \nmorning\neverybody\n\n\n");
	
	
	printf("내 이름은요~ %s 이구요\n\n", "권형준"); // \n\n ->이렇게 연속으로 하면 두줄이 띄워짐, 세줄 띄고 싶으면 세번 쓰면  
	printf("제 나이는요~ %d 입니다.\n\n\n", 9);
/*
	printf("\\a : 경고음 발생\n"); // \\를 두개를 겹쳐쓸때는 \가 출력되는 것을 확인 할 수 있음. ex) 그럼 \를 2개를 나오게 싶게 하면 \\\\ (2개에1개) 이렇게 4개로 해주면됨 주의:\\\ 로하면 \ 하나로 출력 됨.
	printf("\r \\r : 캐리지 리턴\n");
	printf("\n : 개행\n");
	printf("\\\\ : 백슬래시\n");
	printf("\' : 작은 따옴표\n");
	printf(" \" : 큰 따옴표\n");

	printf("%d%d \n",123,456); //123456789
	//123_____456_____789 출력되도록 하세요. 
	printf("%8d %8d %8d \n",123,456,789);
	printf("%-8d %-8d %-8d \n\n\n",123,456,789);

	printf("실수의 출력 : %f // %f",3.14159265 , 456.789123); //f는 실수  3.14159265 출력하면 6자리까지 이므로 반올림되서 3.141593으로 출려고됨, 그리고 %f는 실수이기에 456으로 하면 0으로 출력이 나옴 
	printf("실수의 출력 : %8.2f // %10.3f",3.14159265 , 456.789123); // 8.2, 10.3 에서 8과10은 소수점 포함하여 나옴. 즉, 8.2는 소수점 8자리 에서 두번째 자리까지 잘라서 나오고,  10.3은 소수점 10자리에서 셋째자리까지 잘라서 나 
	
*/	
	printf("정수형 data type 별 byte 수(int) : %d \n", sizeof(int));
	printf("정수형 data type 별 byte 수(char) : %d \n", sizeof(char));
	printf("정수형 data type 별 byte 수(long) : %d \n\n", sizeof(long));
	
	printf("실수형 data type 별 byte 수(float) : %d \n", sizeof(float));
	printf("실수형 data type 별 byte 수(double) : %d \n", sizeof(double));
	
	return 0;
	
}




