#include <stdio.h>
#define NUMBER 5

// 5개의 정수중에서 짝수 최대값과 홀수 최대값을 구하는 프로그램 
int main(void){
	int array[NUMBER];
	
	int i , oddMax, evenMax;
	
	printf("값을 넣으시요. :");
	for(i=0; i<NUMBER; i++){
		scanf("%d", &array[i]);
		// 짝수일시 
		if(array[i] % 2 == 0){
			if(evenMax < array[i]){
				evenMax = array[i];
			}
		}else{
			if(oddMax < array[i]){
				oddMax = array[i];
			}
		}
	}
	printf("홀수 최대값 :%d,  짝수 최대값:%d", oddMax, evenMax);
	
	return 0;
}
