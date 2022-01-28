#include <stdio.h>
#define N 10

int main(void){
	// ÇÇ¶ó¹Ìµå 
	int i,j;
	
	for(i=0; i <N; i++){
		for(j=N-i-1; j>0; j--){
			//ºóÄ­ 
			printf("  ");
		}
		for(j=0; j<i; j++){
			printf("* ");
			//ºóÄ­ µÎ°³ÇÊ¿ä 
		}
		for(j=0; j<i -1; j++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
