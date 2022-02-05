#include <stdio.h>

// 반복함수를 이용해서 숫자 피라미드를 출력.
// 반복함수 같은 경우는 오직 FOR문과 WHILE문으로 구성됩니다. 

int print(int a){
	// 매개변수만큼 반복. 
	int i,j;
	for(i=0; i<a; i++){
		for(j=0; j<=i; j++){
			printf("%d ",j+1);
		}
		printf("\n"); // 한줄(j)가 끝나면 줄 바꿈. 
	}
}

int main(void){
	
	int a;
	printf("숫자를 입력하세요 : "); 
	scanf("%d", &a);
	print(a);
	return 0; 
}
