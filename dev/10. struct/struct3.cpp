#include <stdio.h>
#include <math.h>

struct point{
	int x;
	int y;
}; 

struct rect{
	struct point p1;
	struct point p2;
	// 왼쪽윗점 / 오른쪽 아래점. 
};

int main(void){
	// 사각형의 넓이와 둘레를 구하기.	
	struct rect r; // r이라는 사각형을 만들어준다. 
	int w, h area, peri;
	// area = 넓이 / peri = 둘레. 
	
	printf("왼쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p1.x, &r.p1.y); 
	
	printf("오른쪽 상단의 좌표를 입력하세요 : ");
	scanf("%d %d", &r.p2.x, &r.p2.y); 
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	// 넓이
	area = w * h; 
	// 둘레 
	peri = 2*w + 2*h;
	
	printf("사각형의 넓이는 %d이고, 둘레는 %d입니다.", area, peri);
	return 0;
}
