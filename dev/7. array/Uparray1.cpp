#include <stdio.h>

//구구단을 이용하여 이차원 배열을 출력. 

int main(void){
	int i ,j;
	int gugudan[10][10];
	
	for(i=1; i<=9; i++){
		printf("\n [%d단]\n\n",i);
		for(j=2; j<=9; j++){
			gugudan[i][j] = j*i;
			printf("%d x %d = %d. \n",i,j,gugudan[i][j]);
		}		
	}
	
	return 0;
}
