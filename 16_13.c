#include <stdio.h>

int strCpr(char * firstStr, char * secondStr);

void strCpy(char * firstStr, char * secondStr);

int main(){
	int length;
	printf("Enter the num of strings:\n");
	scanf("%d",&length);
	
	char string[length][50];

	int i;
	for(i = 0; i < length; i++){
		printf("Enter the No.%d string:\n", i+1);
		scanf("%s",string[i]);
	}

	for(int i = 0; i < length; i++){
		for(int j = i + 1; j < length; j++){
			if(!strCpr(string[i], string[j])){
				for(int k = j; k < length; k++){
					strCpy(string[k], string[k+1]);
				}
				length--;
				j--;
			}
		}
	}

	printf("\n");
	for(i = 0; i < length; i++){
		printf("%s\n",string[i]);
	}
}

void strCpy(char *firstStr, char *secondStr){
	int i = 0;
	while(secondStr[i] != '\0'){
		firstStr[i] = secondStr[i];
		i++;
	}
	firstStr[i] = '\0';
}

int strCpr(char * firstStr, char * secondStr){
	int i = 0;
	int res;
	while(!(res = firstStr[i] - secondStr[i]) && secondStr[i]){
		i++;
	}
	if(res < 0){
		res = -1;
	}else if(res > 0){
		res = 1;
	}else{
		res = 0;
	}
	return res;
}
