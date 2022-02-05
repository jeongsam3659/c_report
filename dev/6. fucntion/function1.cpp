#include <stdio.h>

// 전역변수  
int hour;
int min;
int minAdd;

void counter(){
	min += minAdd;
	hour += min /60;
	min %= 60;
	hour %= 24;
}

int main(void){
	printf("시를 입력하세요 : ");
	scanf("%d", &hour);
	printf("분을 입력하세요 : ");
	scanf("%d", &min); 
	printf("더할 분을 입력하세요 :");
	scanf("%d", &minAdd);
	counter();
	printf("더해진 시간은 %d시 %d분 입니다.\n",hour,min );
	return 0;
}
