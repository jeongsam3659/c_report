#include <stdio.h>
#define SIZE 5 // 학생의 총 명수 

struct student{
	int number;
	char name[10];
	double grade;
}; 

int main(void){
	// 구조체 배열.
	 
	struct student list[SIZE];
	int i;
	
	for(i=0; i<SIZE; i++){
		printf("학번을 입력하세요. :");
		scanf("%d", &list[i].number); 
		printf("이름을 입력하세요. :");
		scanf("%s", &list[i].name);
		printf("성적을 입력하세요. :");
		scanf("%lf", &list[i].grade); 
		
		printf("%d번째 학생 등록 완료.", i+1);
		printf("----------------------------------\n\n");
	}
	
	for(i=0; i<SIZE; i++){
		printf("학번: %d\n이름: %s\n성적 : %1.f\n\n", list[i].number, list[i].name, list[i].grade);
	}
	 
	return 0; 
}
