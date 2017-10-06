#include <stdio.h>
int main(int argc, char const *argv[]){
	int length;
	printf("Enter length of array:\n");
	scanf("%d",&length);
	int a[length];
	for(int i = 0; i < length; i++){
		printf("Enter No. %d item:\n", i+1);
		scanf("%d",&a[i]);
	}

	for(int i = 0; i < length - 1; i++){
		for(int j = i + 1; j < length; j++){
			if(a[i] == a[j]){
				for(int k = j; k < length - 1; k++){
					a[k] = a[k+1];
				}
				length--;
				j--;
			}
		}
	}

	printf("The new array is:\n");
	for(int i = 0; i < length; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");

	return 0;
}