#include <stdio.h>
//�μ��� �Է¹޾� �ִ������� ����ϴ� ���α׷� �ۼ� 
//1.�� ���� ����� ������ �迭 ������ ����
//2.�� ���� ���Ͽ� ����� ����Ͽ� ('%' ������ �̿�)�迭�� �����Ѵ�. 
//3. �� �迭�� �������� ���� ���� ū ���� Ž���Ѵ�. �̸� ���Ͽ�
//     - ū ���� �迭�� ���Ͽ� �ڿ��� ���� Ž����. 
//	   - ���� ���� �迭�� Ž����� ���� ������ ���� ������ ������. 
//hint : % �̿�


/*
int main (void)
{
	int number1;
	int number2; 
	int result;
	
	printf("(�μ��� �ִ����� ���ϱ�) �� ���� �Է�.\n");
	printf(">");
	scanf("%d %d",&number1,&number2); 

	int i;
	for(i=1; i<=number1; i++)  
	{
		if(number1%i==0 && number2%i==0) //�� ���ڰ� ������ 0�� �Ǹ� �μ��� ������ �Ǵ� ����� 
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
	int n1, n2; // -> ����� ���� 
	int arr1[100], arr2[100];
	
	printf("2���� ���ڸ� �Է��ϼ��� \n");
	scanf("%d %d", &num1, &num2);
	
	n1 = GetCD(num1, arr1); //n1 : 1st ���� ��� ����    ���:Common Deviser - CD(?)	
	n2 = GetCD(num2, arr2); //n2 : 2st ���� ��� ���� 
	 
	MaxNum = GetGCD2(arr1,n1,arr2,n2);
	
	printf("%d�� ��� : ", num1);
	for(int i=0; i<n1; i++) printf("%d ",arr1[i]);
	printf("\n%d�� ��� : ", num2);
	for(int i=0; i<n2; i++) printf("%d ",arr2[i]);
	
	printf("\n%d�� %d�� �ִ������� %d�Դϴ�.\n", num1, num2, MaxNum);
		
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
	
	for(i=n1-1; i>=0; i--) //�Ǵ� for(i=0;i<n1;i++) �̷��� �ᵵ �� 
	{
		for (j=0; j<n2; j++)
		{
			if((*arr1+i) == *(arr2+j)) return (*arr1+i); //return (*arr1+i)�� return *(arr2+j) �� �ϵ� �������.  || *(arr1+i)
		}
	}
	return -1; //���� �߸�����. ������ �߻��ߴٴ°��� �˷��ִ� ����-1�� 
}

int GetGCD (int n1, int n2) 
{
	
	for(int i=n1-1; i>=0; i--) //�Ǵ� for(i=0;i<n1;i++) �̷��� �ᵵ �� 
	{
		if(n1%i==0 && n2%i==0) return i;
	}
}
