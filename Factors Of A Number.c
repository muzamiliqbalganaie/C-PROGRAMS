//program to find factors of a number.
#include<stdio.h>
int main()
{
    int num,i;
    printf("\nplease enter the number :");
    scanf("%d",&num);
    //to dis[play factors of a number
    printf("\nFactors Of A Number Are : ");

    for(i = 1;i <= num;i++)
    {
        if(num % i == 0)
           {

            printf("%d, ",i);
           }

    }
    return 0;
}
