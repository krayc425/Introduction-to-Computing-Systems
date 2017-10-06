#include <stdio.h>

int main(){
	int n;
	printf("Enter an integer:\n");
	scanf("%d",&n);
	if(n % 7 == 0){
		printf("T\n");
	}else{
		printf("F\n");
	}
}