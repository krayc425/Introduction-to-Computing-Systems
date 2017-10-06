#include <stdio.h>

int main(void){
    int a;
    int b;
    printf("Please enter the first number.\n");
    scanf("%d",&a);
    printf("Please enter the second number.\n");
    scanf("%d",&b);
    if(a > b){
		printf("The bigger number is : %d\n", a);
    }else{
		printf("The bigger number is : %d\n", b);
    }
    
    return 0;
}


