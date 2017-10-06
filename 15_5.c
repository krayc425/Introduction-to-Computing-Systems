#include <stdio.h>

int isPrime(int x);

int main(){
	for(int i = 2; i <= 100; i++){
		if(isPrime(i)){
			printf("%d\n",i);
		}
	}
}

int isPrime(int n){
	for(int i = 2; i <= n / 2; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}
