#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> // <-- atoi�� �������ؼ� ������ϴ� ���. 

// fgets �Լ��� atoi �Լ��� �̿��Ͽ� Ű����κ��� ���� Ű�� �Է¹ް�
// �̸� 10�� ������ ��ȯ�ϴ� ���α׷��� �ۼ��ϼ���.


int main(void) 
{ 

	char str1[30]="Your favorite language is "; // null ���� ���� 27����. 
	char str2[10]; 

	int num;
	char str3[30];

	
	fputs("What is your favorite computer lanaguage ? : ", stdout); 
	fgets(str2, sizeof(str2), stdin); 
	
	strcat(str1, str2); 
	printf("������ ���ڿ� : %s \n", str1);


	fputs("���ڸ� �Է��غ�����. : ", stdout); 
	fgets(str3, sizeof(str3), stdin); //stdin�� file���� �Է¹ޱ� ���� �Լ� 
	num = atoi(str3);
	printf("10������ : %d \n", num);

	return 0; 
}
 
//int Prompt (char *pt, int *ret);
// -Pt�� ���޵� ���ڿ��� ����ϰ�(�ȳ�����) �Էµ� �������ڿ��� ��ȭ�Ͽ� ret������ ��ȯ
// + 2���� �� �Է� ó��,  �� �Է��� ���� 2�� -> �� 2���� �Ѳ����� ó�� �Ѵٴ� �� 
// [����]A=Prompt("�Է��ϼ���:", &r); r->return�� 
//Scanf("%d", &r), A=r  
//  A=Prompt("�Է��ϼ���",&r)   <-- ��ĵ �Լ����� ������ 




