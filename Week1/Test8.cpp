#include <stdio.h>

int main(void)
{
	int aa = 2000; 
	int a = 2005;
	int b = 2021;
	int *pA = &a;
	void *vp;
	
	printf("pA  : %d \n", pA); //주소 값 
	printf("&a  : %d \n", &a); 
	printf("\n\n");
	
	//위의 주소값을 16진수로 표기 
	printf("pA  : %08x \n", pA); //%08x : 8자리의 16진수 표기 
							     //	     빈 공간은 0으로 채움 
	printf("&a  : %08x \n", &a); 
	
	(*pA)++; // a++와 같은 의미 그래서 pA의주소가 0062fe3c 인데 a++ 이므로 3c부분에 1을 증가하여 0062fe40 처럼 끝에 40이됨  
	
	printf("a   : %d \n", a); //직접 접근 
	printf("pA  : %d \n", *pA);//간접 접근
	
	vp = pA++; //이렇게 되면 pA가 증가되기 전 주소가 vp에 들어감 (++이 뒤에있으면 후에 증가)    //  pA++ : a 변수 다음의 주소 
	printf("pA  : %08x \n", pA); //%08x : 8자리의 16진수 표기 
	printf("*pA  : %d \n", *pA);
	printf("*vp  : %08x \n", vp++);
	printf("*vp  : %08x \n", vp++);

/*
	int c[5] = {0, 1, 2, 3};
//	double *b = {1,1,2,2,3,3,4,4,5,5};  // *b = b[]
	
	printf("%d, %d \n", c[0], c[1]);
	printf("%d 번지, %d 번지 \n", &c[0], &c[1]); 
*/	
	
	
	
	return 0;
}    

