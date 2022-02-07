#include <stdio.h>

int main(void){
	int x = 50 , y = 30;
	int absoluteX = (x > 0) ? x : -x;
	
	int max = (x>y) ? x : y;
	int min = (x<y) ? x : y;
	
	printf("x 절대값은 %d \n", absoluteX);
	printf("x 와 y의 최대값은 %d\n", max);
	printf("x 와 y의 최솟은 %d\n", min);
	return 0;
}
