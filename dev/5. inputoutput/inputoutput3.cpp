#include <stdio.h>

int main(void){
	// 받은 정수만큼 더하기. 
	int number, x, i ,sum = 0;
	// 받는 정수의 갯수 
	printf("청수의 갯수를 입력하시오: "); 
	scanf("%d", &number); 
	for(i=0; i<number; i++){
		printf("정수의 값을 입력하시오.");
		scanf("%d", &x); 
		sum += x;
	}
	
	return 0;
}
