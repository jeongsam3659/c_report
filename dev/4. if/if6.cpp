#include <stdio.h>
#define N 10

int main(void){
	// 피라미드 
	int i,j;
	
	for(i=0; i <N; i++){
		for(j=N-i-1; j>0; j--){
			//빈칸 
			printf("  ");
		}
		for(j=0; j<i; j++){
			printf("* ");
			//빈칸 두개필요 
		}
		for(j=0; j<i -1; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
