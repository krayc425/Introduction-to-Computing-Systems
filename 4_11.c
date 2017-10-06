#include <stdio.h>
int main(){
	int n;

	printf("Enter n:\n");
	scanf("%d",&n);

	int i = 0;
	int j = 0; 

	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			printf("%d\t", i);
		}
		printf("\n");
	}

}