#include <stdio.h> 

int main(void){
	int x = 50, y=30;
	// and
	printf("x가 y보다 크고 y는 40미만 입니까? %d\n", (x > y)&&(y < 40));
	// or
	printf("x가 y보다 크고 y는 40미만 입니까? %d\n", (x < y)||(y == 30));
	// not
	printf("x가 50이 아닙니까? %d\n", x != 50);
	
	return 0;
}
