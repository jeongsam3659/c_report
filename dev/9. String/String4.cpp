#include <stdio.h>
#include <string.h>

// 문자열 복 
int main(void){
	char input[15] = "I Love You";
	char result[5] = "LOVE";
	
	strcpy(result, input);
	printf("문자열 복사 : %s\n", result); 

	return 0;
}
