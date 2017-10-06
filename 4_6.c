#include <stdio.h>

int main(){
	int n;
	printf("Enter n(>=2):\n");
	scanf("%d",&n);

	int f_1 = 1;
	int f_2 = 1;

	int counter = 0;

	// printf("%d\n%d",f_1,f_2);

	for(counter = 0; counter < n; counter++){
		if(counter == 1 || counter == 0){
			printf("1\n");
		}else{
			printf("%d\n", f_1 + f_2);
			int c;
			c = f_1;
			f_1 = f_2;
			f_2 += c;
		}
	}

}