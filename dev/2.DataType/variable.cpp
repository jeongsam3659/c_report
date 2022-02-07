#include <stdio.h>
#include <limits.h>

int main(void){
	int x;
	x = 5;
	printf("%d\n", x);
	
	float y;
	y = 123.456;
	
	printf("%.2f\n", y);
	printf("변수 x의 메모리 크기는 %d입니다.\n",sizeof(x));
	printf("변수 x의 메모리 크기는 %d입니다.\n",sizeof(y));
	
	int z = INT_MAX;
	printf("int형의 최대값 : %d\n",z);
	return 0;
}
