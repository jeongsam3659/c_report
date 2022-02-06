#include <stdio.h>

void swap(int *x, int *y){
	//int *x 
	//int형 어떤한 값을 가리키는  포인터형 x 
	
	//두 변수의 값을 서로 변환하는 포인터 변수 
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void){
	int x =1;
	int y =2;
	swap(&x, &y); 
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}
