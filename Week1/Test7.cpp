#include <stdio.h>
#include <conio.h> //getch()�Լ��� �̿��ϱ� ���� ����ϴ� ���(?) 
void CharPos(char buf[], int n); //n : �ε��� 

//scanf �Լ��� getch() �Լ��� �̿��Ͽ� ���ڸ� ������ �� ������ ��ġ�� �ش�Ǵ� ���ڿ��� ����ϱ�. 
//ex)Good_morning [������_�� ǥ��]  2�� �Է½� o �� ���� 

int main(void)
{
	char buf[1024];
	int i,j,k;	//���� Ű���� �ǵ���. (getch�� ���ڴ� ���� ������ �Էµ� ���� �״�� char ������ �ǵ���. )
	scanf("%s", buf); //[Enter] Ű�� ������ ���� �ǵ��� 
	printf("�Է� ���ڿ��� %s �Դϴ�.\n\n", buf);
	
	while(1)
	{
		char ch = getch(); //���� Ű���� �ǵ���. 
		if(ch<48 || ch>57) break; //�ƽ�Ű�ڵ� 48~57�� �ƶ��Ƽ���(0~9) �� 48~57(0~9) ���� �ٸ� ���� �Է��Ҷ� �ݺ��� Ż��, ���α׷� ����. 
		CharPos(buf, ch-48); // ch-48 : ���� Ű���� �ε��� ������ ��ȯ 
		                     
	} 
	 	
	return 0;  
}

void CharPos(char buf[], int n)
{ 
	printf("%s (%d) ---> %c\n\n", buf, n, *(buf+n)); // *(buf+n)�� �� (�ε���)���� ��ġ�� �ش�Ǵ� ���ڿ� 
}


