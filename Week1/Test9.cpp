#include <stdio.h>

//Ű���忡 5�� �������Է� ����. �� �� ���� ������ ���. (�迭�� �Լ��̿�) �Լ��� �迭�� �Ű������� �޾Ƽ� �� �� ���� �������� �ǵ����ִ� �Լ� 

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
        printf ("���ڸ� �Է��ϼ��� : ");
        scanf ("%d", &arr[i]);
    }*/
    
	printf("5���� ���ڸ� �Է��ϼ��� \n");
	scanf("%d %d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
	
	min = GetMin(arr, 5);
	printf("�Էµ� ������ ���� ���� ���� %d�Դϴ�.\n", min);
	
	printf("--------------------------------------------\n");
	printf("�Էµ� ������ ó�� �� ���� %d �� %d�Դϴ�..\n", arr[0],arr[1]);
	//swap(&arr[0], &arr[1]); //�տ� &�� ������� 
	swap(arr, arr+1); //���� �տ��� arr+0������ +0�� �ǹ̰� ���⶧���� arr�� �� 
	printf("�Էµ� ������ ó�� �� ���� ��ȯ�ϸ� %d �� %d�Դϴ�..\n", arr[0],arr[1]);

}

int GetMin(int *p, int n)
{ 
	int min = *p; //�ּҰ��� �־��� �迭�� ���� ù��° ���� �ʱⰪ���� ���� 
	int i,j,k;
	
	for (i=0; i<n; i++)
	{
		if (min > *(p+i)) //*(p+i)   ���⼭ ��ȣ��  min < *(p+i) �� �ִ� 
		{
			min = *(p+i);
		}		
	}
	return min;
}

//����(sort) 
//�ΰ��� ���� a�� b�� ��ȯ (SWAP)
// a = 10; b = 20;
// a = b;  b = a; <== ���� �������? 
// a : 20  b : a (20) ==> ���������� ó���ؾ� �ϱ� ���� 
void swap (int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
	
}



