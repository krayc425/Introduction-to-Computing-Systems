#include <stdio.h>

int main(){
	printf("Enter a string:\n");
	char nextchar;
	do{
		scanf("%c",&nextchar);
		if(nextchar == 32){
			printf("");
		}else{
			printf("%c",nextchar);
		}
	}while(nextchar != '\n');
}