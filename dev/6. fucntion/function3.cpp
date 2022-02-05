#include <stdio.h>

// 1월 1일 부터 현재 날짜까지 
int getDay(int month, int day){
	int i , sum=0;
	
	for(i=1; i<month; i++){
		if(i == 2){
			sum+= 28;
		}else if(i % 2 ==0){
			sum += 30;
		}else {
			sum+= 31;
		}
		
		
	}
	return sum + day;
} 

int main(void){
	int month, day;
	
	printf("이번달은 : ");
	scanf("%d", &month);
	printf("몇 일? : ");
	scanf("%d", &day);
	
	printf("1월 1일부터 해당 날짜까지 거리는 %d입니다 ", getDay(month,day)
	
	
	
	
	);
	
	return 0;
}
