#include <stdio.h>

int main(void){
	int x = -150;
	if(x < 0){
		x = -x;
		// 음수일경우 양수화. 
	}
	printf("x의 절대값은 %d\n", x); 
	return 0;
}
