#include<stdio.h>
int main()
/*{
    int num,i;
    printf("enter a number : ");
    scanf("%d",&num);
    for(i=1;i<11;++i)
    {
    printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}*/

//modification
{
     int n,i,range;
     printf("enter a number : ");
     scanf("%d",&n);

     printf("Enter the range : ");
     scanf("%d",&range);

     for(i=1;i<=range;++i)
    {
      printf("%d * %d = %d \n",n,i,n*i);
    }
    return 0;
}
