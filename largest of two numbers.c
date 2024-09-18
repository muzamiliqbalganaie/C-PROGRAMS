#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        printf("%d is largest",a);
    }
    else if(b>a)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("both %d and %d are equal",a,b);
    }
    return 0;
}
