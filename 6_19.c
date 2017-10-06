#include <stdio.h>

int main(){
	printf("Enter a string:\n");
	char nextchar;
	do{
		scanf("%c",&nextchar);
		if(nextchar >= 97 && nextchar <= 122){
			printf("%c",nextchar - 32);
		}else{
			printf("%c",nextchar);
		}
	}while(nextchar != '\n');
}