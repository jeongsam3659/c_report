#include <stdio.h>
#include <limits.h>

int main(void){
	int x;
	x = 5;
	printf("%d\n", x);
	
	float y;
	y = 123.456;
	
	printf("%.2f\n", y);
	printf("���� x�� �޸� ũ��� %d�Դϴ�.\n",sizeof(x));
	printf("���� x�� �޸� ũ��� %d�Դϴ�.\n",sizeof(y));
	
	int z = INT_MAX;
	printf("int���� �ִ밪 : %d\n",z);
	return 0;
}
