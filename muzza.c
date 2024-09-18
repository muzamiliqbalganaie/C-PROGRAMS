#include <stdio.h>
int checkPrime(int n);
int main() {
  int n, i, flag = 0; /*for (i = 2; i <= n / 2; ++i) {
    // condition for i to be a prime number
    if (checkPrime(i) == 1) {
      // condition for n-i to be a prime number
      if (checkPrime(n - i) == 1) {
        printf("%d = %d + %d\n", n, i, n - i);
        flag = 1;*/
  printf("Enter a positive integer: ");
  scanf("%d", &n);

 for(i = 2;i <= n/2;++i )
 {
     if(checkPrime(i)==1){
            if(checkPrime(n - i)==1){
                printf("%d = %d + %d\n",n,i,n-i);
                flag = 1;

            }

     }
 }
if (flag==0)
{
    printf("%d can't be the sum of two prime numbes",n);
}

  return 0;
}

// function to check prime number
int checkPrime(int n)
{

    int i,flag = 1;

    if(n==0||n==1){
    printf("the number you entrerd is not a prime number.");


    }
    for (i =2;i<=n/2;++i)
    {
    34

        if(n%i==0)
        {
            flag =0;
            break;
        }

    }

  return flag;
}
