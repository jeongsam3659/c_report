#include <stdio.h>

int main(void){
	// 1~1000������ �� 
	int x = 1;
	int sum = 0;
	
	while(x <= 1000){
		sum += x;
		x++;
	}
	printf("1~1000������ ���� %d�Դϴ�.\n",sum);
	return 0;
}
