#include <stdio.h>

long power(int x, int y);

double linear(int a, int b);

double squareRoot(int x);

int main(){
	int x,y;
	printf("Enter x and y:\n");
	scanf("%d%d",&x,&y);

	printf("%ld\n",power(x,y));

	printf("%lf\n",linear(x,y));

	printf("%lf\n",squareRoot(x));
}

long power(int x, int y){
	int i = y;
	long result = 1;
	while(i >= 1){
		result = result * x;
		i--;
	}
	return result;
}

double linear(int x, int y){
	if(x == 0){
		printf("a cannot be 0!");
		return 0.0;
	}else{
		return - (double)y / (double)x;
	}
}

double squareRoot(int x){
	double y = (double)x;
	while(y - (y + x / y) / 2 >= 10E-6){
		y = (y + x / y) / 2;
	}
	return y;
}