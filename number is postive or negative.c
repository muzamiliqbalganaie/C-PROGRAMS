#include<stdio.h>
int main()
{
    int num;
    printf("enter a number  : ");
    scanf("%d",&num);
    if (num >= 0)
        printf("entered number %d is positive",num);
    else
        printf("entered number %d is negative",num);
    return 0;
}
