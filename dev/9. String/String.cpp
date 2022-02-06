#include <stdio.h>

int main(void){
	
	char input[1001];
	gets(input); // input char배열 안에 다음으로 사용자가 입력하는 문자열을 엔터가 끝날때까지 들어감. 
	int count = 0;
	
	
	while(input[count] != '\0'){
		count++;
	}
	
	printf("입력한 문자열의 길이는 %d입니다. ",count);
	printf("입력한 문자열 : %s" , input);
	
	return 0;
}
