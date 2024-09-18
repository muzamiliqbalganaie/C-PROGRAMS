#include<stdio.h>
int addsum(int n);

int main()
{
    int n,result;
    printf("Enter The Positive Integer : ");
    scanf("%d",&n);
    printf("sum = %d",addsum(n));
    return 0;
}
int addsum(int n)
{
    if(n!=1)
        return n + addsum(n - 1);
    else
        return n;
}
