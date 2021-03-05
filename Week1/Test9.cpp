#include <stdio.h>

//키보드에 5개 정수를입력 받음. 그 중 가장 작은수 출력. (배열과 함수이용) 함수는 배열을 매개변수로 받아서 그 중 가장 작은수를 되돌려주는 함수 

//int GetMin(int arr[], int n); -> arr[] = *p
int GetMin(int *p, int n); //n -> number
void swap (int *a, int *b);

int main(void)
{
	int arr[5];
	int min;
	
	/*
	int i;
	for (i=0; i<5; i++) {
        printf ("숫자를 입력하세요 : ");
        scanf ("%d", &arr[i]);
    }*/
    
	printf("5개의 숫자를 입력하세요 \n");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	
	min = GetMin(arr, 5);
	printf("입력된 숫자중 가장 작은 수는 %d입니다.\n", min);
	
	printf("--------------------------------------------\n");
	printf("입력된 숫자중 처음 두 수는 %d 과 %d입니다..\n", arr[0],arr[1]);
	//swap(&arr[0], &arr[1]); //앞에 &를 써줘야함 
	swap(arr, arr+1); //원래 앞에는 arr+0이지만 +0은 의미가 없기때문에 arr만 씀 
	printf("입력된 숫자중 처음 두 수를 교환하면 %d 과 %d입니다..\n", arr[0],arr[1]);

}

int GetMin(int *p, int n)
{ 
	int min = *p; //최소값은 주어진 배열의 가장 첫번째 값을 초기값으로 설정 
	int i,j,k;
	
	for (i=0; i<n; i++)
	{
		if (min > *(p+i)) //*(p+i)   여기서 부호가  min < *(p+i) 면 최대 
		{
			min = *(p+i);
		}		
	}
	return min;
}

//정렬(sort) 
//두개의 변수 a와 b의 교환 (SWAP)
// a = 10; b = 20;
// a = b;  b = a; <== 과연 맞을까요? 
// a : 20  b : a (20) ==> 순차적으로 처리해야 하기 때문 
void swap (int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	
}



