#include<stdio.h>
void main()
{
    int n, rev = 0 ,remainder;
    printf("enter the no whose reverse is to find :");
    scanf ("%d",&n);
    while(n!=0){
    n = n % 10;
    rev = rev * 10 + remainder;
    n /= 10;
    }
    printf("reverse of %d is %d",&n,&rev);
    }
getch();

