#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> // <-- atoi�� �������ؼ� ������ϴ� ���.


//�Լ��� ���� :

//�Լ��� : int chrPos(char *str, char chr);
//return type : int : chr������ ��ġ, ���ٸ� -1 
// input : char *str : ��� ���ڿ�
//		   char chr : ã�� ����
// ��� : str�� ���޵� ���ڿ��߿��� chr ������ ��ġ�� 
//        �˻��Ͽ� �ش� ��ġ�� ��ȯ(zero base)
//		  �˻����� ������ -1�� ��ȯ 


//�Լ��� : int Prompt (char *pt, int *ret);
// return type : int : �Էµ� ������, ������ ���� ret�ε� ����
// input : char *pt : ��� ���ڿ�(�ȳ�����),
//         int *ret : ��ȯ�� ���� ������ �ּ� 

/*
	int Prompt (char *pt, int *ret);
	-Pt�� ���޵� ���ڿ��� ����ϰ�(�ȳ�����) �Էµ� �������ڿ��� ���ڷ� ��ȭ�Ͽ� ret������ ��ȯ
	+ �Լ��� return ������ ó�� 
	+ 2���� �� �Է� ó��,  �� �Է��� ���� 2�� -> �� 2���� �Ѳ����� ó�� �Ѵٴ� �� 
	[����]A=Prompt("�Է��ϼ���:", &r); r->return�� 
	Scanf("%d", &r) 
	A=r;  
	===> A=Prompt("�Է��ϼ���",&r)   <-- ��ĵ �Լ����� ������ 

*/

int Prompt(char *pt, int *ret); //ret�� ��ȯ �� 
int chrPos(char *str, char chr);  //while�� �̿� 
int chrPos2(char *str, char chr); 
int strPos(char *str, char *s1); 

int main(void) 
{ 
	int a,b,c;
//	Prompt("A�� �Է��ϼ���.", &a);
//	c = Prompt("B�� �Է��ϼ���.", &b);	
//	printf("A:%d B:%d C:%d",a ,b ,c);
		
	char *str = "abcdefgacdbhijklmn";  //chr='o'; 
	char *s1 = "acdb";
	printf("���ڿ� : %s\n", str);
	printf("%c�� ��ġ�� %d�Դϴ�.\n", 'e', chrPos(str,'e'));
//	printf("%c�� ��ġ�� %d�Դϴ�.\n", 'b', chrPos2(str,'b'));
	
	printf("%s�� ��ġ�� %d�Դϴ�.\n", s1, strPos(str, s1));
	
	

// 	printf("%c�� ��ġ�� %d�Դϴ�.\n", 'e', chrPos(str,'o'));
}


int Prompt(char *pt, int *ret)
{
	char buf[254];
	printf("%s", pt);
	
	fgets(buf,254,stdin); //scanf ���� 
	*ret = atoi(buf); //int r = atoi(buf);
	return *ret;
	
}

int chrPos(char *str, char chr) 
{  // *str = "abcdefghijklmn";  chr='o'; 
	int i,j,k;
	i=0;
	while(*(str+i)) //while(1)�̾ƴ�  *(str+i) �̷��ԵǸ� i��0���� ���۵Ǹ� ���� "abcdefghijklmn" ���� ���ڿ��� n���� �����Ӹ��� null��°� �����Ͽ� 0�� ��. �̷��� �ؾ� 0�Ǵ� �ڸ��� �˻���(ã������) �ڸ��� ���ٴ� �ǹ̷� �޾Ƶ鿩��. 
	{
		/*
		if(*str+i++) == chr) //*(str+i) -> str�� i��° �ش��Ҹ� ������ ���� ��ȯ.  //str+i++ �� str+i��� ���� ���� ������ i�� ���� 
		{
			return i-1; //break�ؼ� if�� �ۿ� ���� �ص������� break��� �ٷ� ��ȯ�ص� ��. 
		}*/			
		if(*(str + i++) == chr) return i-1;
	}
		return -1; 
}


int chrPos2(char *str, char chr) 
{  
	int i,j,k;
//	i=0;
//	while(*(str+i))   {}
		for(i=0; *(str+i); i++) 
		{
			/*
			if(*str+i) == chr)
			{
				return 1;
			}*/
			if(*(str+i) == chr) return i;
		}
		return -1;
}

// �Լ��� : int strPos (char *str, char *s1); == str�̶�� ���ڿ� �ȿ��� chr��� ���ڰ� �ִ��� Ȯ�� ( ��ġ�� �ǵ��� �������� ��) 
// return type : int : s1 ������ ��ġ , ���ٸ� -1 ��ȯ  == return�� -1��� ���� ���ڿ��� �ش��ϴ� ���ڰ� ���ٶ�� �ǹ�  
// input : char *str: ��� ���ڿ� 
//        char s1 : ã�� ���ڿ� 
/* ���: str�� ���޵� ���ڿ� �߿��� s1 ���ڿ��� �˻��Ͽ� �ش� ��ġ�� ��ȯ ( zero base == ���� �տ� ���°��� 0���� �����Ѵٴ� �ܾ� ) 
        �˻����� ������ ����(-1) ��ȯ */
// 1. str���� s1�� ù���ڰ� �ִ� ��ġ�� �˻� 
// 2. �ش� ��ġ���� strncmp�� �̿��Ͽ� ��.
//    ������ return i; �ƴϸ� �ٽ� 1��.
// 3.���� ������ ������ -1 

//strncmp
int strPos(char *str, char *s1) 
{	//	*str = "abcdefgacdbhijklmn"; s1='acdb'; ret : 7
		int i,j,k,p;
		
		for(i=0; *(str+i); i+=p+1) 
		{
			p = chrPos(str+i, *s1);
			if(p == -1) return-1; //-1�̸� ���̻� ���ٶ�� �� 
			if (strncmp(str+p+i, s1, strlen(s1)) == 0) return p+i;
					
		}
		//	if(*(str+i) == *(s1)) return i;
		return -1;
}


