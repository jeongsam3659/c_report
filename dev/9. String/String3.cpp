#include <stdio.h>
#include <string.h>

int main(void){
	
	char inputOne[5] = "A";	
	char inputTwo[5] = "B";
	
	printf("문자열 비교 : %d\n", strcmp(inputOne, inputTwo));
	// A B = -1
	// B A = 1
	// B B = 0
	
	return 0;
}
