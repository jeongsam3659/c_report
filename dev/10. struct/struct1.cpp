#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 학생 정보 구조체. 
struct student{
	int number;
	char name[10];
	double grade;
};


int main(void){
	struct student s;
	s.number = 20220207;
	strcpy(s.name, "홍길동");
	s.grade = 4.5; 
	
	printf("학번 : %d\n", s.number);
	printf("이름 : %s\n", s.name);
	printf("학점 : %.1f\n", s.grade);
	
	return 0;
}
