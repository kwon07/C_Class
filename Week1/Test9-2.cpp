#include <stdio.h>
#include "MyHeader.h" 
int sorting(int *array, int count);

int main()
{
	int i,j,k;
	int arr[]={1,3,5,7,9,2,4,0,8,6};
	
	int n = sizeof(arr)/sizeof(int);
	printf("�� ������ : \n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]); 
	}
	printf("\n\n");
	sorting(arr, n);
	printf("���� ������ : \n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]); 
	}
	
	
}

int sorting(int *array, int count)
{
	int i,j,k;
	//int n 
	for(i=0; i<count-1; i++) // �迭�� �� ��� 
	{
		for (j=i+1; j<count; j++) //�迭�� ������ 
		{			
			if(*(array+i) > *(array+j)) // *(array+i)
			{
			  swap(array+i, array+j);			  
			  //if(i>j) swap(&i, &j) 		  
			}	
		}
	}
	
}
