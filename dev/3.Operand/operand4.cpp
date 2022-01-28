#include <stdio.h>

int main(void){
	// x가 y와 같은 값을 가지는 가?
	// x = y >> x 와 y가 같은 상황 그 자체를 의미.
	// x == y >> true일 경우, x와 y가 같은 값을 같다.
	
	int x =50, y = 30;
	printf("x가 y와 같은 값인가? %d\n", x==y); // 0 출력 
	// C언어에서 true : 1 , false : 0 
	printf("x가 y와 같은 값인가? %d\n", x!=y); // 1 출력 
	printf("x가 y와 같은 값인가? %d\n", x>y);  
	printf("x가 y와 같은 값인가? %d\n", x<y); 
	printf("x가 y와 같은 값인가? %d\n", x>=y); 
	printf("x가 y와 같은 값인가? %d\n", x<=y); 
	
	return 0;
}
