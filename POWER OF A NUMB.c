/*#include<stdio.h>
int main()
{
    int base,exp;
    long long result=1;
    printf("enter the base number :");
    scanf("%d",&base);
    printf("enter the exponent number :");
    scanf("%d",&exp);
    while(exp!=0)
    {
        result*=base;             //res=res*base
        --exp;
    }
    printf("answer = %lld",result);
  return 0;
}*/


#include<math.h>
#include<stdio.h>
int main()
{
    int base ,exp,result;

    printf("Enter an integer: ");
    scanf("%d",&base);
    printf("enter the exponent number :");
    scanf("%d",&exp);

    //calculate the power
    result=pow(base,exp);
    printf("%d^%d=%d",base,exp,result);


}
