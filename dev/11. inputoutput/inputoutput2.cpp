#include <stdio.h>
#include <string.h>

// 텍스트 파일 분석. 
int main(void){
	
	FILE *fp;
	char fname[256];
	char buffer[256];
	char world[256];
	int line =0;
	
	printf("파일 이름을 입력하세요 : ");
	scanf("%s", fname);
	
	printf("검색할 단어를 입력하세요. :");
	scanf("%s", world);
	
	// 해당 파일 열기. 
	if((fp = fopen(fname, "r")) == NULL){
		fprintf(stderr, "파일 %s를 열 수 없습니다. \n" , fname);
		return 0;
	}
	
	// 해당 단어, 라인마다 찾기. 
	while(fgets(buffer, 256, fp)){
		// 256길이만큼 fp의 단어를 읽어 buffer에 담는다. 
		line++; // 한 라인씩 진행. 
		if(strstr(buffer, world)) { // 단어찾기/ 
			printf("라인 %d : 단어 %s이 가 발견되었습니다. \n", line,world);
		}
		
	}
	
	fclose(fp);	
	return 0;
} 
