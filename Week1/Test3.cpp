#include <stdio.h>>

int main(void){

 int number;

 for(int number=0; number<10; number++){
 		switch(number){ 
		case 1:
		    printf(">1 one\n"); 
		    break;
		case 2:
		    printf(">2 two\n"); 
		    break;
		case 3:
			printf(">3 three\n"); 
			break;
		case 4:
			printf(">4 four\n"); 
			break;
		case 5:
			printf(">5 five\n"); 
			break;
		case 6:
			printf(">6 six\n"); 
			break;
		case 7:
			printf(">7 seven\n");
		 	break;
	    case 8:
			printf(">8 eight\n"); 
			break;
	    case 9:
			printf(">9 Nine\n"); 
			break;		
		default:
			  printf("수고하셨습니다.\n");
		      break;	
     	} 
 }
 while(1){
	
  printf("숫자(1~9)를 입력해주세요. 0입력시 반복문 탈출.\n");
  scanf("%d", &number);
 
  if (number==0){
 	printf("zero.");
 	printf("반복문 탈출합니다.");
 	break;
 }else if(1<=number<=9){
		switch(number){ 
		case 1:printf(">1 one\n"); break;
		case 2:printf(">2 two\n"); break;
		case 3:printf(">3 three\n"); break;
		case 4:printf(">4 four\n"); break;
		case 5:printf(">5 five\n"); break;
		case 6:printf(">6 six\n"); break;
		case 7:printf(">7 seven\n"); break;
	    case 8:printf(">8 eight\n"); break;
	    case 9:printf(">9 Nine\n"); break;		
		default:
			  printf("수고하셨습니다.\n");
		      break;	
     	} 
     }
  }
	return 0;
}
