#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("Please enter the first number.\n");
    scanf("%d",&a);
    printf("Please enter the second number.\n");
    scanf("%d",&b);
    printf("The bigger number is : %d\n", a > b ? a : b);
    return 0;
}


