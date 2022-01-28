#include <stdio.h>

// 계산기 
int main(void){
	
	char o;
	int x, y;
	
	while(1){
		printf("계산기입니다. \n 수식을 입력하세여.");
		scanf("%d %c %d",&x, &o, &y);
	
		if(o == '+'){
			//덧셈 
			printf("%d %c %d = %d\n", x,o,y,x+y);
		}else if(o == '-'){
			// 뺄셈 
			if( x > y){
				printf("%d %c %d = %d\n", x,o,y,x-y);
			}else{
				printf("%d %c %d = %d\n", y,o,x,y-x);
			}
			
		}else if(o == '*'){
			// 곱셈 
			printf("%d %c %d = %d\n", x,o,y,x*y);
		}else if(o == '/'){
			// 곱셈 
			printf("%d %c %d = %d\n", x,o,y,x/y);
			
		}else{
			printf("일력이 잘못되었습니다.");
		}
		getchar(); 
		printf("프로그램을 종료하시겠습니까? ( y / n)"); 
		scanf("%c", &o);
		if(o == 'n' || o =='N'){
			continue;
		}else if(o == 'y' || o =='Y'){
			break;
		}else{
			printf("y/n 중 하나의 문자를 입력하시오.");
		}
	}
	
	return 0;
}
