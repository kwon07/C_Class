#include <stdio.h>  // <-- ������� header


int main(void)  //<-- 2~6�� { } �߰�ȣ ���� �ݱ� �߿�! body 
{
	printf("Good Morning!. \n"); //printf <-- �Լ� (function)  ��, C���� �Լ��� �̷���� ����� �� -- �����ݷ� �ʼ�
//	printf("�ȳ��ϼ���. Hi");    // \n <-- �ٹٲ����ֱ� 
	printf("Hello �� �� ��! \n"); 
	
	printf("%d \n", 1234);
	printf("%d %d \n", 10, 20);
	
	printf("My age : %d \n", 20);
	printf("%d is my point\n", 100);
	printf("Good \nmorning\neverybody\n\n\n");
	
	
	printf("�� �̸�����~ %s �̱���\n\n", "������"); // \n\n ->�̷��� �������� �ϸ� ������ �����, ���� ��� ������ ���� ����  
	printf("�� ���̴¿�~ %d �Դϴ�.\n\n\n", 9);
/*
	printf("\\a : ����� �߻�\n"); // \\�� �ΰ��� ���ľ����� \�� ��µǴ� ���� Ȯ�� �� �� ����. ex) �׷� \�� 2���� ������ �Ͱ� �ϸ� \\\\ (2����1��) �̷��� 4���� ���ָ�� ����:\\\ ���ϸ� \ �ϳ��� ��� ��.
	printf("\r \\r : ĳ���� ����\n");
	printf("\n : ����\n");
	printf("\\\\ : �齽����\n");
	printf("\' : ���� ����ǥ\n");
	printf(" \" : ū ����ǥ\n");

	printf("%d%d \n",123,456); //123456789
	//123_____456_____789 ��µǵ��� �ϼ���. 
	printf("%8d %8d %8d \n",123,456,789);
	printf("%-8d %-8d %-8d \n\n\n",123,456,789);

	printf("�Ǽ��� ��� : %f // %f",3.14159265 , 456.789123); //f�� �Ǽ�  3.14159265 ����ϸ� 6�ڸ����� �̹Ƿ� �ݿø��Ǽ� 3.141593���� ������, �׸��� %f�� �Ǽ��̱⿡ 456���� �ϸ� 0���� ����� ���� 
	printf("�Ǽ��� ��� : %8.2f // %10.3f",3.14159265 , 456.789123); // 8.2, 10.3 ���� 8��10�� �Ҽ��� �����Ͽ� ����. ��, 8.2�� �Ҽ��� 8�ڸ� ���� �ι�° �ڸ����� �߶� ������,  10.3�� �Ҽ��� 10�ڸ����� ��°�ڸ����� �߶� �� 
	
*/	
	printf("������ data type �� byte ��(int) : %d \n", sizeof(int));
	printf("������ data type �� byte ��(char) : %d \n", sizeof(char));
	printf("������ data type �� byte ��(long) : %d \n\n", sizeof(long));
	
	printf("�Ǽ��� data type �� byte ��(float) : %d \n", sizeof(float));
	printf("�Ǽ��� data type �� byte ��(double) : %d \n", sizeof(double));
	
	return 0;
	
}




