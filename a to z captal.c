#include<stdio.h>
int main()
{
    int a, b;
    printf("\n please enter value for A and B RESPECTIVELY");
    scanf("%d%d\n",a,b);

    printf("before swapping value of A = %d \nand value of B = %d ",a,b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping value of A =%d AND\n value of b = %d",a,b);

    return 0;

}
