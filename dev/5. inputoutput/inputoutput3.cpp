#include <stdio.h>

int main(void){
	// ���� ������ŭ ���ϱ�. 
	int number, x, i ,sum = 0;
	// �޴� ������ ���� 
	pintf("û���� ������ �Է��Ͻÿ�: "); 
	scanf("%d", &number); 
	for(i=0; i<number; i++){
		printf("������ ���� �Է��Ͻÿ�.");
		scanf("%d", &x); 
		sum += x;
	}
	
	return 0;
}
