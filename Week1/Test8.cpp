#include <stdio.h>

int main(void)
{
	int aa = 2000; 
	int a = 2005;
	int b = 2021;
	int *pA = &a;
	void *vp;
	
	printf("pA  : %d \n", pA); //�ּ� �� 
	printf("&a  : %d \n", &a); 
	printf("\n\n");
	
	//���� �ּҰ��� 16������ ǥ�� 
	printf("pA  : %08x \n", pA); //%08x : 8�ڸ��� 16���� ǥ�� 
							     //	     �� ������ 0���� ä�� 
	printf("&a  : %08x \n", &a); 
	
	(*pA)++; // a++�� ���� �ǹ� �׷��� pA���ּҰ� 0062fe3c �ε� a++ �̹Ƿ� 3c�κп� 1�� �����Ͽ� 0062fe40 ó�� ���� 40�̵�  
	
	printf("a   : %d \n", a); //���� ���� 
	printf("pA  : %d \n", *pA);//���� ����
	
	vp = pA++; //�̷��� �Ǹ� pA�� �����Ǳ� �� �ּҰ� vp�� �� (++�� �ڿ������� �Ŀ� ����)    //  pA++ : a ���� ������ �ּ� 
	printf("pA  : %08x \n", pA); //%08x : 8�ڸ��� 16���� ǥ�� 
	printf("*pA  : %d \n", *pA);
	printf("*vp  : %08x \n", vp++);
	printf("*vp  : %08x \n", vp++);

/*
	int c[5] = {0, 1, 2, 3};
//	double *b = {1,1,2,2,3,3,4,4,5,5};  // *b = b[]
	
	printf("%d, %d \n", c[0], c[1]);
	printf("%d ����, %d ���� \n", &c[0], &c[1]); 
*/	
	
	
	
	return 0;
}    

