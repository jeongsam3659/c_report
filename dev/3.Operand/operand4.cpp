#include <stdio.h>

int main(void){
	// x�� y�� ���� ���� ������ ��?
	// x = y >> x �� y�� ���� ��Ȳ �� ��ü�� �ǹ�.
	// x == y >> true�� ���, x�� y�� ���� ���� ����.
	
	int x =50, y = 30;
	printf("x�� y�� ���� ���ΰ�? %d\n", x==y); // 0 ��� 
	// C���� true : 1 , false : 0 
	printf("x�� y�� ���� ���ΰ�? %d\n", x!=y); // 1 ��� 
	printf("x�� y�� ���� ���ΰ�? %d\n", x>y);  
	printf("x�� y�� ���� ���ΰ�? %d\n", x<y); 
	printf("x�� y�� ���� ���ΰ�? %d\n", x>=y); 
	printf("x�� y�� ���� ���ΰ�? %d\n", x<=y); 
	
	return 0;
}
