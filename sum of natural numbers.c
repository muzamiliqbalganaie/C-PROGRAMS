#include<stdio.h>
int  main()
{
    int n,i,sum = 0;


    //printf("enter postive integer : ");
    //scanf("%d",&n);






    //using for loop


    /*for(i = 1;i <= n;++i)
    {
        sum += i;
    }
    printf("sum of natural number is %d ",sum);

    return 0;*/











    //using while loop


   /* i=1;
    while(i<=n)
    {
        sum+=i;
        ++i;
    }
    printf("sum = %d ",sum);
    return 0;*/













   // using do-while loop and for loop
    do{
        printf("enter positive integer : ");
        scanf("%d",&n);
    }
    while (n <= 0);
    for(i = 1 ;i<=n;++i)
    {
        sum+=i;

    }
printf("sum = %d ",sum);
return 0;
}
