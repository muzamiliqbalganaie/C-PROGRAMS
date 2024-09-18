#include<stdio.h>
#include<conio.h>
int main()
{
    int x, y=1, z;
    printf("enter the no \n");
    scanf("%d",&x);
    while(y!=11)
        {
        z=x*y;
        y++;
       }

    printf("table of %d is %d",&x,&z);
    return 0;
}

