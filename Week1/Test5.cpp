#include <stdio.h>
#include <conio.h> //getch()�Լ��� �̿��ϱ� ���� ����ϴ� ���(?) 
void ConvertChr(char buf[]);

int main(void)
{
	char buf[1024];
	int i,j,k;	
	while(1)
	{
		//getch()�� scanf�� ���� �Է� �Լ� 
		char ch = getch(); //���� Ű���� �ǵ���. (getch�� ���ڴ� ���� ������ �Էµ� ���� �״�� char ������ �ǵ���. )
		scanf("%s", buf); //[Enter] Ű�� ������ ���� �ǵ��� 
		printf("�Է� ���ڿ��� %s �Դϴ�.\n\n\n", buf);
		ConvertChr(buf);
		printf("\n\n");
	} 
	 	
	return 0;  
}

void ConvertChr(char buf[])
{
	int i,j,k;	
	printf("��ȯ�� ���ڵ� (�빮��->�ҹ���, �ҹ���->�빮��) : ");
	for (i=0; buf[i] != 0; i++)
	{
		char a = buf[i]; //a��� ������ buf[i]�� �����͸� �����Ŵ 
		if ((a>96) && (a<123)) //a�� �ҹ����̸� //�빮�� ��ȯ (�ƽ�Ű �ڵ� -> 97~122:�ҹ���) 
		{
	 	   a -= 32;//�빮�� ��ȯ 32�� ���� ���� ex) 97�� �ҹ��� a�� �ǹ� 32�� ���� �ƽ�Ű�ڵ�65�� ��. 65�� �빮�� A�� �ǹ� ������ ���ڵ� �̿͵� 
	    } 
		else if ((a>64) && (a<123))
		{
	 	   a += 32;//�ҹ��� ��ȯ
	    }
		printf("%c  ", a);
	}
}

