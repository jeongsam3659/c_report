#include <stdio.h>

int main(void){
	int x = -150;
	if(x < 0){
		x = -x;
		// �����ϰ�� ���ȭ. 
	}
	printf("x�� ���밪�� %d\n", x); 
	return 0;
}
