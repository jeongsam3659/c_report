#include <stdio.h>

// ���� 
int main(void){
	
	char o;
	int x, y;
	
	while(1){
		printf("�����Դϴ�. \n ������ �Է��ϼ���.");
		scanf("%d %c %d",&x, &o, &y);
	
		if(o == '+'){
			//���� 
			printf("%d %c %d = %d\n", x,o,y,x+y);
		}else if(o == '-'){
			// ���� 
			if( x > y){
				printf("%d %c %d = %d\n", x,o,y,x-y);
			}else{
				printf("%d %c %d = %d\n", y,o,x,y-x);
			}
			
		}else if(o == '*'){
			// ���� 
			printf("%d %c %d = %d\n", x,o,y,x*y);
		}else if(o == '/'){
			// ���� 
			printf("%d %c %d = %d\n", x,o,y,x/y);
			
		}else{
			printf("�Ϸ��� �߸��Ǿ����ϴ�.");
		}
		getchar(); 
		printf("���α׷��� �����Ͻðڽ��ϱ�? ( y / n)"); 
		scanf("%c", &o);
		if(o == 'n' || o =='N'){
			continue;
		}else if(o == 'y' || o =='Y'){
			break;
		}else{
			printf("y/n �� �ϳ��� ���ڸ� �Է��Ͻÿ�.");
		}
	}
	
	return 0;
}
