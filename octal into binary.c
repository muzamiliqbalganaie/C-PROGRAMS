#include<stdio.h>
#include<math.h>
//function prototype
int convert(long long n);
int main()
{

    int bin,n;
    printf("Enter the octal number :");
    scanf("%d",&n);
    //function call
    bin = convert(n);
    printf("%d in octal = %lld in decimal.",n,convert(n));

    return 0;


}
//function defention
int convert(long long n)

//convert octal into decimal
{

    int dec =0,i=0;
    long long bin=0;
    while(n!=0)
    {
        dec += (n % 10) * pow(8,i);

        ++i;

        n/=10;

    }
    //convert decimal into binary.
    i = 1;
    while(dec!=0)
    {
     bin += (dec % 2)*i;

     dec/=2;

     i*=10;

    }
    return bin;
}
