#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=5,c=10,result;

    result=(a==b)&&(c>b);
    printf("(a==b)&&(c>d) is %d\n",result);

    result=(a==b)&&(c<b);
    printf("(a==b)&&(c<b) is %d\n",result);

    result=(a!=b)||(c<b);
    printf("(a!=b)||(c<b) is %d\n",result);

    return 0;
}
