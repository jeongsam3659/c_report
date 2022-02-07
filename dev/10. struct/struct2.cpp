#include <stdio.h>
#include <math.h>

// 두점 사이의 거리계산
struct point{
	int x;
	int y;
};


int main(void){
	struct point p1, p2;
	int xDiff, yDiff; // Diff - 해당 좌표의 차이 
	double distance;
	
	printf("1번 정의 좌표를 입력하세요 : ");
	scanf("%d %d", &p1.x, &p1.y);
		
	printf("2번 정의 좌표를 입력하세요 : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	xDiff = p1.x - p2.x;
	yDiff = p1.y - p2.y;
	distance = sqrt(xDiff * xDiff + yDiff *yDiff);
	
	printf("두 점 사이의 거리는 %f입니다. \n", distance);
	
	return 0;
} 
