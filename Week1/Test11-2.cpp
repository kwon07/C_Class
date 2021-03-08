#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> // <-- atoi를 쓰기위해서 써줘야하는 헤더.


//함수의 정의 :

//함수명 : int chrPos(char *str, char chr);
//return type : int : chr문자의 위치, 없다면 -1 
// input : char *str : 대상 문자열
//		   char chr : 찾을 문자
// 기능 : str로 전달된 문자열중에서 chr 문자의 위치를 
//        검색하여 해당 위치를 반환(zero base)
//		  검색되지 않으면 -1을 반환 


//함수명 : int Prompt (char *pt, int *ret);
// return type : int : 입력된 정수값, 동일한 값이 ret로도 전달
// input : char *pt : 출력 문자열(안내문자),
//         int *ret : 반환할 정수 변수의 주소 

/*
	int Prompt (char *pt, int *ret);
	-Pt로 전달된 문자열을 출력하고(안내문자) 입력된 정수문자열을 숫자로 변화하여 ret값으로 반환
	+ 함수의 return 값으로 처리 
	+ 2개의 값 입력 처리,  즉 입력할 값은 2개 -> 이 2개를 한꺼번에 처리 한다는 것 
	[메인]A=Prompt("입력하세요:", &r); r->return값 
	Scanf("%d", &r) 
	A=r;  
	===> A=Prompt("입력하세요",&r)   <-- 스캔 함수와의 차이점 

*/

int Prompt(char *pt, int *ret); //ret는 반환 값 
int chrPos(char *str, char chr);  //while문 이용 
int chrPos2(char *str, char chr); 
int strPos(char *str, char *s1); 

int main(void) 
{ 
	int a,b,c;
//	Prompt("A를 입력하세요.", &a);
//	c = Prompt("B를 입력하세요.", &b);	
//	printf("A:%d B:%d C:%d",a ,b ,c);
		
	char *str = "abcdefgacdbhijklmn";  //chr='o'; 
	char *s1 = "acdb";
	printf("문자열 : %s\n", str);
	printf("%c위 위치는 %d입니다.\n", 'e', chrPos(str,'e'));
//	printf("%c위 위치는 %d입니다.\n", 'b', chrPos2(str,'b'));
	
	printf("%s위 위치는 %d입니다.\n", s1, strPos(str, s1));
	
	

// 	printf("%c위 위치는 %d입니다.\n", 'e', chrPos(str,'o'));
}


int Prompt(char *pt, int *ret)
{
	char buf[254];
	printf("%s", pt);
	
	fgets(buf,254,stdin); //scanf 역할 
	*ret = atoi(buf); //int r = atoi(buf);
	return *ret;
	
}

int chrPos(char *str, char chr) 
{  // *str = "abcdefghijklmn";  chr='o'; 
	int i,j,k;
	i=0;
	while(*(str+i)) //while(1)이아닌  *(str+i) 이렇게되면 i가0부터 시작되며 위에 "abcdefghijklmn" 에서 문자열의 n다음 끝으머리는 null라는게 존재하여 0이 됨. 이렇게 해야 0되는 자리에 검색할(찾고자할) 자리가 없다는 의미로 받아들여짐. 
	{
		/*
		if(*str+i++) == chr) //*(str+i) -> str의 i번째 해당요소를 변수에 값을 반환.  //str+i++ 는 str+i라는 것을 먼저 수행후 i를 증감 
		{
			return i-1; //break해서 if문 밖에 리턴 해도되지만 break대신 바로 반환해도 됨. 
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

// 함수명 : int strPos (char *str, char *s1); == str이라는 문자열 안에서 chr라는 문자가 있는지 확인 ( 위치를 되돌려 받을려는 것) 
// return type : int : s1 문자의 위치 , 없다면 -1 반환  == return이 -1라는 뜻은 문자열에 해당하는 문자가 없다라는 의미  
// input : char *str: 대상 문자열 
//        char s1 : 찾을 문자열 
/* 기능: str로 전달된 문자열 중에서 s1 문자열를 검색하여 해당 위치를 반환 ( zero base == 제일 앞에 나온것은 0부터 시작한다는 단어 ) 
        검색되지 않으면 음수(-1) 반환 */
// 1. str에서 s1의 첫문자가 있는 위치를 검색 
// 2. 해당 위치에서 strncmp를 이용하여 비교.
//    같으면 return i; 아니면 다시 1번.
// 3.만일 끝까지 없으면 -1 

//strncmp
int strPos(char *str, char *s1) 
{	//	*str = "abcdefgacdbhijklmn"; s1='acdb'; ret : 7
		int i,j,k,p;
		
		for(i=0; *(str+i); i+=p+1) 
		{
			p = chrPos(str+i, *s1);
			if(p == -1) return-1; //-1이면 더이상 없다라는 것 
			if (strncmp(str+p+i, s1, strlen(s1)) == 0) return p+i;
					
		}
		//	if(*(str+i) == *(s1)) return i;
		return -1;
}


