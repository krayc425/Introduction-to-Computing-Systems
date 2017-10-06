#include <stdio.h>

int main(){
	int i = 9;
	int result = 1;
	while(i >= 1){
		result *= i;
		i--;
	}
	printf("%d\n",result);
}