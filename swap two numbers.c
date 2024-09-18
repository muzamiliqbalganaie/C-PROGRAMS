#include<stdio.h>
int main()
{
    double a ,b ,c;
    printf("\nplease Enter First Value : ");
    scanf("\n%lf",&a);
    printf("\nplease Enter Secound Value : ");
    scanf("\n%lf",&b);

    //value of a is assigned in variable c
    c = a;

    //value of b is assigned to a
    a = b;

    //value of c (intial value of a) is assigned to secound
    b = c;

    printf("\nAfter Swapping  First number is = %.2lf \n After Swapping Secound Number = %.2lf",a,b);
    return 0;
}
