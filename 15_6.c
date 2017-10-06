#include <stdio.h>

char num2letter(int n);

int main(){
	int number;
	printf("Please enter a 2 - digit number:\n");
	scanf("%d",&number);

	int b = number % 10;
	int a = number / 10; 

	for(char i = num2letter(a); i < num2letter(a+1); i++){
		for(char j = num2letter(b); j < num2letter(b+1); j++){
			printf("%c%c\n",(i == ' ') ? ' ' : i , (j == ' ') ? ' ' : j );		
		}	
	}

}

char num2letter(int n){
	switch(n){
		case 2:
			return 'a';
		case 3:
			return 'd';
		case 4:
			return 'g';
		case 5:
			return 'j';
		case 6:
			return 'm';
		case 7:
			return 'p';
		case 8:
			return 't';
		case 9:
			return 'w';
		case 10:
			return 'z'+1;
		default:
			return ' ';
	}
}