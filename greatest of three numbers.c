#include<stdio.h>
int main()
{
   double n1, n2, n3;
   printf("enter Three Numbers : ");
   scanf("%lf %lf %lf",&n1,&n2,&n3);

   if (n1>=n2)
   {
       if (n1>=n3)
        printf("largest number Is = %.2lf",n1);
       else
        printf("Largest Number Is = %.2lf",n2);


   }
   else
    {
     if(n2 >= n3)
     printf("Largest Number Is = %.2lf",n2);
    else
     printf("Largest Number Is = %.2lf",n3);
    }
    return 0;

}
