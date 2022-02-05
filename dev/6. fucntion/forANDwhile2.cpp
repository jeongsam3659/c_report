#include <stdio.h>

// 재귀함수.( Recursive Function ) 
void print(int count){
	
	// count가 0이 될때까지 반복. 
	if(count == 0){
		return;
	}else{
		printf("문자열을 출력합니다. %d\n", count);
		print(count -1); 
		// 재귀함수 print()함수를 호출 
	}
}

int main(void){
	int number;
	printf("숫자를 입력하세요 :");
	scanf("%d", &number); 
	print(number);
	
	return 0;	
}
