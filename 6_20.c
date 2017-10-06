#include <stdio.h>
int main(){
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);

	for(int i = 31; i >= 0; i--){
		printf("%d", n & (1 << i) ? 1 : 0);
	}

	printf("\n");
}