//DECIMAL INTO BINARY
#include<stdio.h>

//FUNCTION PROTOTYPE

int convert(long long n);
int main(){
int n,bin;
printf("Enter The decimal value : ");
scanf("%lld",&n);

//FUNCTION CALL

bin = convert(n);
printf(" Decimal Value Of %lld = %d In BINARY.",n,convert(n));
return 0;

}
//FUNCTION DECLERATION

int convert(long long n){
int bin = 0,rem,i = 1;

 while (n != 0){

    rem = n % 2;

    n/=2;

    bin += rem * i;

    i*=10;
 }
 return bin;
}
