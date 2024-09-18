#include<stdio.h>
int main()
{
    int year;
    printf("Enter the current year : ");
    scanf("%d",&year);

    if (year%4==0)
        {printf("The Year %d Is A Leap Year.",year);}
    else
       {printf("The Year %d Is Not A Leap Year.",year);}

return 0;
}
