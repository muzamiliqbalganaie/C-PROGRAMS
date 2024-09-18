#include<stdio.h>
#include<conio.h>
int getsum(int n)
{
    int sum = 0;
    while(n != 0);
    {
        sum = sum + n % 10;
        n = n /  10;
    }
    return sum;
}

   void main()
   {
       int n ;
       printf("\nplease enter the number");
       scanf(" %d ",&n);
\
'?'       printf(" %d ", getsum(n))
"?;
[p[;    m

/    v ]\//
\

       getch();
   }


