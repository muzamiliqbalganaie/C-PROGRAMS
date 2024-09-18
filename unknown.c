//sum of natural numbers  using recrussion
#include <stdio.h>
int addnumbers(int n);
int main()
{

    int num ;
    printf("enter the number");
    scanf("%d",&num);
    printf("sum = %d",addnumbers(num));
    return 0;

}
//function for sum of numbers ussing recurssion
int addnumbers(int n)
{
    if (n!= 0)
        return n + addnumbers(n - 1);
    else
        return n;

}


