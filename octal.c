//binary int octal
#include<stdio.h>
#include<math.h>
//function prototype
int convert(long long n);
int main()
{
    int n,oct;
    printf("Enter The decimal number  : ");
    scanf("%d",&n);
    oct = convert(n);
    printf("%d in binary = %lld in octal",n,convert(n));
    return 0;

}
//function defention
int convert(long long n)
{
    int dec =0,i = 0,oct =0;
    while(n!=0)
    {
        dec += (n % 2) *pow(2,i);
        n/=10;
        i++;
    }

    i=1;
    while(dec!=0)
    {
        oct += (dec % 8) *i;
        dec/=10;
        i*=10;

    }
    return oct;
}
