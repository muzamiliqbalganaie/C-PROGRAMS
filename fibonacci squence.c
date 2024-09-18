/*Start
Declare variables i, a,b , show
Initialize the variables, a=0, b=1, and show =0
Enter the number of terms of Fibonacci series to be printed
Print First two terms of series
Use loop for the following steps
-> show=a+b
-> a=b
-> b=show
-> increase value of i each time by 1
-> print the value of show
End*/

#include<stdio.h>
int main()
{
    int i,n,a=0,b=1,show=0;

    printf("enter the number of terms of fibonacci series to be printed :");
    scanf("%d",&n);
    printf(" %d\n%d\n",a,b);

    for(i=2;i<=n;++i)
    {
           show = a + b;
          printf("%d\n",show);
         a = b;
        b = show;
    }
    return 0;

}
