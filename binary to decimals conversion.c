//CONVERT BINARY INTO DECIMAL
#include<stdio.h>
#include<math.h>
//FUNCTION PROTOTYPE
int convert(long long n);
int main ()
{
    long long n;
    printf("enter the binary number : ");
    scanf("%lld",&n);
    printf("BINARY VALUE OF %lld = %d in decimal. ",n,convert(n));

    return 0;

}
//FUNCTION DEFENTION.
int convert(long long n)
{
    int dec = 0,i = 0,rem;
    while(n!=0)
    {
        rem = n % 10;
        n/=10;
        dec += rem * pow(2,i);
        ++i;

    }
    return dec;

}

