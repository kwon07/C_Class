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
			  printf("�����ϼ̽��ϴ�.\n");
		      break;	
     	} 
 }
 while(1){
	
  printf("����(1~9)�� �Է����ּ���. 0�Է½� �ݺ��� Ż��.\n");
  scanf("%d", &number);
 
  if (number==0){
 	printf("zero.");
 	printf("�ݺ��� Ż���մϴ�.");
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
			  printf("�����ϼ̽��ϴ�.\n");
		      break;	
     	} 
     }
  }
	return 0;
}
