#include <stdio.h>
#include <limits.h>
#define NUMBER 5 

// 5개의 정수 중 최대값과 최소값의 위치. 
int main(void){
	// 임의수 , 최대값, 최소값, 위치 
	int i, max,min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	// 호출: array[0]~
	
	printf("배열에 넣을 수를 입력 : ");
	for(i=0; i<NUMBER; i++){	
		scanf("%d", &array[i]);
		if(max < array[i]){
			max = array[i];
			index = i;
		}
		
	}
	
	printf("가장 큰 값은 %d입니다. 그리고 %d번째에 있습니다.\n", max, index+1); 
	
	min = INT_MAX;
	printf("배열에 넣을 수를 입력 : ");
	for(i=0; i<NUMBER; i++){
		
		scanf("%d", &array[i]);
		if(min > array[i]){
			min = array[i];
			index = i;
		}
		
	}
	printf("가장 작은 값은 %d입니다. 그리고 %d번째에 있습니다.\n", min, index+1); 
	
	return 0;
} 
