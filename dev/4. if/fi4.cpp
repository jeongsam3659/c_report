#include <stdio.h>

int main(void){
	// 1~1000까지의 합 
	int x = 1;
	int sum = 0;
	
	while(x <= 1000){
		sum += x;
		x++;
	}
	printf("1~1000까지의 합은 %d입니다.\n",sum);
	return 0;
}
