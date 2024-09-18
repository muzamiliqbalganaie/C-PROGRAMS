#include<stdio.h>
int main()
{
    int n,rev=0,remainder;
    printf("enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10 +remainder;
        n/=10;

    }
    printf("reverse of number is %d :",rev);
    return 0;
}
