/*#include<stdio.h>
int main()
{
    int n1, n2,max;
    printf("enter two positive integers : ");
    scanf("%d %d",&n1,&n2);

    //maximum number between n1 and n2 is stored in max
    max = (n1 > n2) ? n1 : n2;
    while(1){
        if (max % n1 == 0 && max % n2 == 0){
            printf("The LCM of %d and %d is %d.",n1,n2,max);
            break;

        }
        ++max;

    */
    #include <stdio.h>
    int main()
    {
    int n1, n2, i, gcd, lcm;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i) {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}

