#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Enter n:\n");
	scanf("%d",&n);

	double pi = 0.0;

	for(int i = 1; i <= n; i++){
		pi += 4.0 * pow(-1.0, i - 1.0) / (2 * i - 1);
		printf("%f\n",pi);
	}

	printf("%f\n", pi);
}