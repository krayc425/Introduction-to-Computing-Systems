#include <stdio.h>

void Dex2Bin(int number, int * binary);

int main(){
	int n;
	int bin[32] = {0};
	
	printf("Enter a number:\n");
	scanf("%d",&n);

	Dex2Bin(n, bin);

	for (int i = 31; i >= 0; i--){
		printf("%d", bin[i]);
	}
	printf("\n");
}

void Dex2Bin(int number, int * binary){
	if(number >= 2){
		*binary = number % 2;
		Dex2Bin(number / 2, binary + 1);
	}else{
		*binary = number;
	}
}