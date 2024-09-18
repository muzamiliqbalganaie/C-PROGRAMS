/*#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
printf("Enter the number except '1' & '0' to check prime:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{//my program simple
printf("Number is not prime");
}
else
{
    printf("number is prime");
    break;
    }
}return 0;
 }*/

#include<stdio.h>
int main(){
int n,i,m=0,flag=0;
printf("Enter the positine integer:");
scanf("%d",&n);
m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
flag=1;
break;
}
if(n == 1)
{
    printf("1 is neither prime nor composite");
}
}
if(flag==0)
{printf("Number is prime");
}
else
{
    printf ("Number is composite(not prime");
}
return 0;
 }
