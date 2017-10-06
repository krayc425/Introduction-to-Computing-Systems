#include <stdio.h>
int main(int argc, char const *argv[]){
	int n;
	char string[50];
	printf("Enter a string:\n");	
	scanf("%s",string);
	printf("Enter a number:\n");
	scanf("%d",&n);

	int i = 0;
	while(string[i] != '\0'){
		if(string[i] > 126 - n){
			string[i] -= (94 - n);
		}else{
			string[i] += n;
		}
		i++;
	}

	printf("%s\n",string);

	return 0;
}