#include <stdio.h>

int main(void){
	FILE *fp = NULL;
	fp = fopen("output.txt","w");
	// fopen == 파일을 열어라
	// -w  == 쓰기모드 , -r == 읽기모드 
	
	if(fp == NULL){
		printf("파일 열기에 실패했습니다. \n");
	}else{
		printf("파일 열기에 성공했습니다. \n");
	}
	
	// 한글자씩 입력. 
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('!', fp);
	fclose(fp); // fopen ~ fclose로 닫아야한다. 
	
	return 0;
}
