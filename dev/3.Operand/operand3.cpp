#include <stdio.h>

int main(void){
	int x = 100;
	printf("%d\n",x);
	x += 50; // x = x + 50;
	printf("%d\n",x);
	x -= 20;
	printf("%d\n",x);
	x *= 2;
	printf("%d\n",x);	
	x /= 3;
	printf("%d\n",x);
	x %= 3;
	printf("%d\n",x);
	
	return 0;
}
