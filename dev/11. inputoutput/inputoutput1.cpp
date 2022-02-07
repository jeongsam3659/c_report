#include <stdio.h>

int main(void){
	
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if(fp == NULL){
		printf("파일 열기에 실패했습니다 .\n");
	}else{
		printf("파일 열기에 성공했습니다 .\n");
	}
	
	// fgetc - 문자 하나를 읽는행위
	// EOF -   end of file 파일 끝부분
	while ((c = fgetc(fp)) != EOF){
		putchar(c);
		// putchar -  해당 문자를 콘솔에 출력.
	}
	
	fclose(fp);
	
	// 한글은 읽지 못함. 
	return 0;	
}
