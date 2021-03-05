#include <stdio.h>
//두수를 입력받아 최대공약수를 출력하는 프로그램 작성 
//1.두 수의 약수를 저장할 배열 변수를 선언
//2.각 수에 대하여 약수를 계산하여 ('%' 연산자 이용)배열에 저장한다. 
//3. 두 배열중 공통적인 수중 가장 큰 수를 탐색한다. 이를 위하여
//     - 큰 수의 배열에 대하여 뒤에서 부터 탐색함. 
//	   - 작은 수의 배열중 탐색대상 값과 동일한 값이 있으면 중지함. 
//hint : % 이용


/*
int main (void)
{
	int number1;
	int number2; 
	int result;
	
	printf("(두수의 최대공약수 구하기) 두 수를 입력.\n");
	printf(">");
	scanf("%d %d",&number1,&number2); 

	int i;
	for(i=1; i<=number1; i++)  
	{
		if(number1%i==0 && number2%i==0) //두 숫자가 나눠서 0이 되면 두수의 공통이 되는 공약수 
		result=i;
	}
	 printf("%d", result);
	 return 0; 
}
*/


int GetCD(int num1, int *arr1);
int GetGCD(int n1, int n2);
int GetGCD2(int *arr1, int n1, int *arr2, int n2);

int main (void)
{
	int num1, num2, MaxNum;
	int n1, n2; // -> 약수의 개수 
	int arr1[100], arr2[100];
	
	printf("2개의 숫자를 입력하세요 \n");
	scanf("%d %d", &num1, &num2);
	
	n1 = GetCD(num1, arr1); //n1 : 1st 수의 약수 갯수    약수:Common Deviser - CD(?)	
	n2 = GetCD(num2, arr2); //n2 : 2st 수의 약수 개수 
	 
	MaxNum = GetGCD2(arr1,n1,arr2,n2);
	
	printf("%d의 약수 : ", num1);
	for(int i=0; i<n1; i++) printf("%d ",arr1[i]);
	printf("\n%d의 약수 : ", num2);
	for(int i=0; i<n2; i++) printf("%d ",arr2[i]);
	
	printf("\n%d와 %d의 최대공약수는 %d입니다.\n", num1, num2, MaxNum);
		
    return 0;
}

int GetCD(int num1, int *arr)
{
	int i,j,k;
	
	for(i=1, j=0; i<=num1; i++)
	{
		if(num1%i == 0) // *arr++ = i;	
		{
		  *(arr+j) = i;
		  j++;
		} 
	}
	return j;
}



int GetGCD2(int *arr1, int n1, int *arr2, int n2)
{
	int i,j,k;
	
	for(i=n1-1; i>=0; i--) //또는 for(i=0;i<n1;i++) 이렇게 써도 됨 
	{
		for (j=0; j<n2; j++)
		{
			if((*arr1+i) == *(arr2+j)) return (*arr1+i); //return (*arr1+i)나 return *(arr2+j) 를 하든 상관없음.  || *(arr1+i)
		}
	}
	return -1; //뭔가 잘못됐음. 오류가 발생했다는것을 알려주는 리턴-1문 
}

int GetGCD (int n1, int n2) 
{
	
	for(int i=n1-1; i>=0; i--) //또는 for(i=0;i<n1;i++) 이렇게 써도 됨 
	{
		if(n1%i==0 && n2%i==0) return i;
	}
}
