#include <stdio.h>

void strCat(char *firstStr, char *secondStr);

void strCpy(char *firstStr, char *secondStr);

int main(){
	char firstStr[50];
	char secondStr[50];
	printf("Enter the first string:\n");
	scanf("%s",firstStr);
	printf("Enter the second string:\n");
	scanf("%s",secondStr);

	strCat(firstStr,secondStr);

	strCpy(firstStr,secondStr);
}

void strCat(char *firstStr, char *secondStr){
	int i = 0;
	while(firstStr[i] != '\0'){
		i++;
	}

	int j = 0;
	while(secondStr[j] != '\0'){
		firstStr[i] = secondStr[j];
		i++;
		j++;
	}

	printf("%s\n",firstStr);
}

void strCpy(char *firstStr, char *secondStr){
	int i = 0;
	while(secondStr[i] != '\0'){
		firstStr[i] = secondStr[i];
		i++;
	}
	firstStr[i+1] = '\0';
	printf("%s\n",firstStr);
}