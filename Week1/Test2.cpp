#include <stdio.h>

int main()
{

//	int a=10,b=20, result; //이렇게 써도 되지만 가능한 안쓰고 밑에처럼 쓰기

//	int a=10;
//	int b=20;
// 	result =0;

//	printf("두 수의 덧셈 결과는 result = %d + %d = %d\n", a,b,result);
/*
	printf("%d\n",++a);
	printf("%d\n",a);씀 
	a = 10;
	 
	printf("%d\n",a++);       //참고: a++ --> a = a+1     b-- --> b = b-1
	printf("%d\n",a);
	a = 10;
	
	printf("%d\n",--a);
	printf("%d\n",a);
	a = 10;
	
	printf("%d\n",a--);
	printf("%d\n",a);
	a = 10;
*/

//a변수는 10입니다 
//	result = a + b;

    int a, b, result=0;
	
	printf("범위의 누적값 계산을 위한 두 수를 입력하세요.\n");
	scanf("%d %d", &a, &b); //&의 의미: 주소 
	
	printf("\n%d ~ %d 사이의 배수의 합은\n", a, b);
	int t = a; // t : 변수 a의 초기값 보관용 (a의 초기값은 1)
	
	int res1=0, res2=0; //res1:홀수 합 res2:짝수 합 
	int res3=0,res4=0,res5=0,res6=0,res7=0,res8=0,res9=0;
	for (int i=a; i<=b; i++)
	{
//		if(i%2==0) // 짝수
//		{
//			res2 += i;	
//	 	}
//		else 		// 홀수
//		{
//			res1 += i; 
//		} 
		if(i%9==0) res9+=i;  //9의 배수
		else if (i%8==0) res8+=i; //8의 배수
		else if (i%7==0) res7+=i; //7의 배수
		else if (i%6==0) res6+=i; //6의 배수
		else if (i%5==0) res5+=i; //5의 배수
		else if (i%4==0) res4+=i; //4의 배수
		else if (i%3==0) res3+=i; //3의 배수
		else if (i%2==0) res2+=i; //2의 배수
		else res1 += i;
		
	}

	printf("\n반복문을 이용한 누적 계산\n");
	printf("a = %d\nb = %d\n", t,b);
	printf("9의배수의 합 = %d\n", res9);
	printf("8의배수의 합 = %d\n", res8);
	printf("7의배수의 합 = %d\n", res7);
	printf("6의배수의 합 = %d\n", res6);
	printf("5의배수의 합 = %d\n", res5);
	printf("4의배수의 합 = %d\n", res4);
	printf("3의배수의 합 = %d\n", res3);
	printf("2의배수의 합 = %d\n", res2);
	printf("1의배수의 합 = %d\n", res1);
	printf("홀수의 합 = %d\n", res1);
	printf("\n입니다.\n\n");

	

//문제.1~10까지 더한 수는? 
//while문 
    while(a<=b) //while(1)은 무한반복 a<b로 하면 1~9까지만 더해짐. 아니면 a<b조건에서 b를 11로 선언하면 해결 
	{  
	
   	if (a % 2 == 1){
		 result = result + a; // result += a; 
	}
		 a = a + 1;
		 //a++;
		 // result += a++;  -> 위에 두문장을 축약 한 것 	
	  
	}   
	printf("\n[while]문을 이용한 누적 계산\n");  
	printf("a = %d\nb = %d\n", t,b);
	printf("result = %d\n", result);
	printf("\n\n");
//=====================================================================

//	while문으로 홀수만 더하기 // for문으로 짝수만 더하기   

//=====================================================================
	int n;
	result = 0;	 //result값 초기화
	a = t;
	
	for (n=a; a<=b; a++) //(초기값, 수행조간, 증감기연산)
	{
		if (a % 2 == 0){
		result += a; //result = result + a;
	 }
	}

	printf("[for]문을 이용한 누적 계산\n");   
	printf("a = %d\nb = %d\n", n, b);
	printf("result = %d\n", result);
	
		//	if(a>5) // a가5보다 큰 가 ?
		//	if(a<10) // a가 10보다 작은가? 



	return 0; //함수의 끝에는 return 해주기 (생략해도 좋지만 습관처럼 해주기) 

}


