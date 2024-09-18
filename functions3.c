// #include<stdio.h>
// int addsum(int n);

// int main()
// {
//     int n,result;
//     printf("Enter The Positive Integer : ");
//     scanf("%d",&n);
//     printf("sum = %d",addsum(n));
//     return 0;
// }
// int addsum(int n)
// {
//     if(n!=1)
//         return n + addsum(n - 1);
//     else
//         return n;
// }

#include <stdio.h>

void printMessage(int x)
{
    printf("this is the message through  function %d", x);
}
int main()
{
    int c = 5;
    void printMessage(c);

    return 0;
}
