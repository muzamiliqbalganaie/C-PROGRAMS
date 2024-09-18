#include<stdio.h>
int main()
{
    int n,rev = 0,remainder,originalN;
    printf("enter an integer :");
    scanf("%d",&n);
    originalN = n;

    //reversed number is stored in n
    while(n!=0)
    {
        remainder=n%10;
        rev=rev*10 + remainder;
        n/=10; //n=n/10;
    }
    //palindrome i

    if(rev == originalN)
        printf("%d is palidromic",originalN);
    else
       {
           printf("%d is not palidromic",originalN);}
    return 0;
}
