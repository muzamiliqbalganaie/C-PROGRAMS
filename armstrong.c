/*An Armstrong number is a number that equals to the sum of its
 own digits, where each digit raised to the power of number of digits
 . For example, 153 is an Armstrong number, because:

153 = 1³+5³+3³
    = 1+125+27
    = 153
Since 153 is a 3-digit number, therefore each digit raised to the power of 3.
Now let's move on and implement it in a C program.,
*/
#include<stdio.h>
int narm(int);
int power(int,int);
void check(int);
void range(int,int);
main()
{
int m,a,b;
printf("Enter any number : ");
scanf("%d",&m);
check(m);
printf("\n\nEnter number range : ");
scanf("%d%d",&a,&b);
range(a,b);
}
int power(int x,int n)
{
int i,s=1;
for(i=0;i<n;i++)
s*=x;
return s;
}
void check(m)
{
if(m==narm(m))
printf("It is an Armstrong number.");
else printf("It is NOT an Armstrong no");
}
void range(int a,int b)
{
int i;
for(i=a;i<b;i++)
{
if(i==narm(i))
printf("%d\t",i);
}
}
int narm(int n)
{
int i,p=n,rem,len=0,s=0;
for(len=0;p>0;len++)
p/=10;
for(i=0;i<len;i++)
{
rem=n%10;
s+=power(rem,len);
n/=10;
}
return s;
}
