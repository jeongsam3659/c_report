#include <stdio.h>

int main(void){
	/*
		윤년 
			조건1 >> 4년마다, 그렇지만 100년 단위일 때는 윤년에 해당하지 않도록.
			조건2 >> 400년 단위일때는 어떤 상황이든 간에 윤녕으로 설정한다고. 
	*/
	int year = 2016;
	if((year % 4 ==0 && year % 100 != 0) || year % 400 == 0){
		printf("%d은 윤년입니다. \n", year);
	}else{
		printf("%d은 윤년이 아닙니다. \n", year);
	}
		
	return 0; 
}
