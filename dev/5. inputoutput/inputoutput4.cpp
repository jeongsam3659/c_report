#include <stdio.h>

int main(void){
	// 구구단 
	int x,i;
	printf("정수를 입력하세요. :");
	scanf("%d", &x); 
	for(i =1; i<=9; i++){
		printf("%d * %d =  %d\n", x, i , x * i);
	}
	return 0;
}
