#include <stdio.h>

// 조합  
//  서로 다른 n개의 물건에서 순서를 생각하지 않고, r개를 택할때.
//  이것은 n개에서 r개를 택하는 조합. 

int nCr(int n, int r){
	if(r == 0 || r ==n){
		// r이 0이거나 n이라면, 값이  1이며
		return 1;		
	}else{
		// nCr(n-1, r-1) + nC(n-1, r)
		return nCr(n-1, r-1) + nCr(n-1 , r);
	}
	
}


int main(void){
	int n , r;
	printf("조합에 사용할 수 2개를 입력하세요 : ");
	scanf("%d %d", &n,&r);
	printf("%d", nCr(n,r)); 
	
	return 0;
}
