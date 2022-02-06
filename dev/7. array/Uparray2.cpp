#include <stdio.h>

//학생 성적의 총합. 

int main(void){
	// [ 학생의 수 ][ 수학/ 영어 점수 ]  
	int score [5][2];
	int i;
	int total[2] = {0,} ;
	
	for(i=0; i<5;i++){
		printf("%d번 학생의 수학, 영어점수 : ", i+1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for(i=0; i<5; i++){
		total[0]+= score[i][0];
		total[1]+= score[i][1];
	}
	
	printf("\n\n 5명의 수학 점수 합계 : %d\n", total[0]);
	printf("5명의 영어 점수합계 : %d\n", total[1]);
	
	
	return 0;
	
}
