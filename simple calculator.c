#include<stdio.h>
int main()
{
    char op;
    double a,b;
    printf("please enter the operator( + ' - ' * ' / ) :");
    scanf("%c",&op);

    printf("\nEnter the two numbers : ");
    scanf("%lf %lf",&a,&b);

    switch(op){
case'+':
    printf("%.1lf + %.1lf = %.1lf",a,b,a + b);
    break;

    case'-':
    printf("%.1lf - %.1lf = %.1lf",a,b,a - b);
    break;

    case'*':
    printf("%.1lf * %.1lf = %.1lf",a,b,a * b);
    break;

    case'/':
    printf("%.1lf / %.1lf = %.1lf",a,b,a / b);
    break;

    default:
    printf("Error! operator does not match");
    break;
    }
    return 0;

}
