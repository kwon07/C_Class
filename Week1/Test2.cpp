#include <stdio.h>

int main()
{

//	int a=10,b=20, result; //�̷��� �ᵵ ������ ������ �Ⱦ��� �ؿ�ó�� ����

//	int a=10;
//	int b=20;
// 	result =0;

//	printf("�� ���� ���� ����� result = %d + %d = %d\n", a,b,result);
/*
	printf("%d\n",++a);
	printf("%d\n",a);�� 
	a = 10;
	 
	printf("%d\n",a++);       //����: a++ --> a = a+1     b-- --> b = b-1
	printf("%d\n",a);
	a = 10;
	
	printf("%d\n",--a);
	printf("%d\n",a);
	a = 10;
	
	printf("%d\n",a--);
	printf("%d\n",a);
	a = 10;
*/

//a������ 10�Դϴ� 
//	result = a + b;

    int a, b, result=0;
	
	printf("������ ������ ����� ���� �� ���� �Է��ϼ���.\n");
	scanf("%d %d", &a, &b); //&�� �ǹ�: �ּ� 
	
	printf("\n%d ~ %d ������ ����� ����\n", a, b);
	int t = a; // t : ���� a�� �ʱⰪ ������ (a�� �ʱⰪ�� 1)
	
	int res1=0, res2=0; //res1:Ȧ�� �� res2:¦�� �� 
	int res3=0,res4=0,res5=0,res6=0,res7=0,res8=0,res9=0;
	for (int i=a; i<=b; i++)
	{
//		if(i%2==0) // ¦��
//		{
//			res2 += i;	
//	 	}
//		else 		// Ȧ��
//		{
//			res1 += i; 
//		} 
		if(i%9==0) res9+=i;  //9�� ���
		else if (i%8==0) res8+=i; //8�� ���
		else if (i%7==0) res7+=i; //7�� ���
		else if (i%6==0) res6+=i; //6�� ���
		else if (i%5==0) res5+=i; //5�� ���
		else if (i%4==0) res4+=i; //4�� ���
		else if (i%3==0) res3+=i; //3�� ���
		else if (i%2==0) res2+=i; //2�� ���
		else res1 += i;
		
	}

	printf("\n�ݺ����� �̿��� ���� ���\n");
	printf("a = %d\nb = %d\n", t,b);
	printf("9�ǹ���� �� = %d\n", res9);
	printf("8�ǹ���� �� = %d\n", res8);
	printf("7�ǹ���� �� = %d\n", res7);
	printf("6�ǹ���� �� = %d\n", res6);
	printf("5�ǹ���� �� = %d\n", res5);
	printf("4�ǹ���� �� = %d\n", res4);
	printf("3�ǹ���� �� = %d\n", res3);
	printf("2�ǹ���� �� = %d\n", res2);
	printf("1�ǹ���� �� = %d\n", res1);
	printf("Ȧ���� �� = %d\n", res1);
	printf("\n�Դϴ�.\n\n");

	

//����.1~10���� ���� ����? 
//while�� 
    while(a<=b) //while(1)�� ���ѹݺ� a<b�� �ϸ� 1~9������ ������. �ƴϸ� a<b���ǿ��� b�� 11�� �����ϸ� �ذ� 
	{  
	
   	if (a % 2 == 1){
		 result = result + a; // result += a; 
	}
		 a = a + 1;
		 //a++;
		 // result += a++;  -> ���� �ι����� ��� �� �� 	
	  
	}   
	printf("\n[while]���� �̿��� ���� ���\n");  
	printf("a = %d\nb = %d\n", t,b);
	printf("result = %d\n", result);
	printf("\n\n");
//=====================================================================

//	while������ Ȧ���� ���ϱ� // for������ ¦���� ���ϱ�   

//=====================================================================
	int n;
	result = 0;	 //result�� �ʱ�ȭ
	a = t;
	
	for (n=a; a<=b; a++) //(�ʱⰪ, ��������, �����⿬��)
	{
		if (a % 2 == 0){
		result += a; //result = result + a;
	 }
	}

	printf("[for]���� �̿��� ���� ���\n");   
	printf("a = %d\nb = %d\n", n, b);
	printf("result = %d\n", result);
	
		//	if(a>5) // a��5���� ū �� ?
		//	if(a<10) // a�� 10���� ������? 



	return 0; //�Լ��� ������ return ���ֱ� (�����ص� ������ ����ó�� ���ֱ�) 

}


