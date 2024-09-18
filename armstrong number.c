//program to find Armstrong number
#include<stdio.h>
int main()
{
    int num,originalN,remainder,result = 0;
    printf("Enter THE NUMBER : ");
    scanf("%d",&num);
    originalN =num;

    while(originalN!=0)
    {
       remainder = originalN%10;
       result+=remainder*remainder*remainder;
       originalN/=10;

    }
    if(result == num)
        printf("%d is a armstrong number",num);
    else{
        printf("%d is not armstrong number",num);
    }
    return 0;
}


// <----> another code--->
// #include<stdio.h>
// #include<conio.h>
// int main()
// {

//     int start,end,temp,noOfDigits,num,res =0,rem,pow,i;
//     printf("Enter the Interval : ");
//     scanf("%d%d",&start,&end);
//     printf("\n Armstrong number between %d and %d :-\n",start,end);

//     while(start <= end)
//     {
//         temp = start;
//         noOfDigits = 0;

//         while(temp > 0)
//         {

//             temp = temp / 10;
//             noOfDigits++;
//         }
//         num = start;
//         while(num>0)
//         {
//             rem = num%10;
//             pow = 1;
//             i = 0;
//             while(i<noOfDigits)
//             {
//                 pow = pow*rem;
//                 i++;

//             }
//             res = res + pow;
//             num = num/10;

//         }
//         if(res==start)
//             print("%d\n",res);
//         start++;
//         res =0;
//     }

//     return 0;
// }*/
// #include<stdio.h>
// #include<conio.h>
// int main()
// {
//     int start, end, temp, noOfDigit, num, res=0, rem, pow, i;
//     printf("Enter the Interval: ");
//     scanf("%d%d", &start, &end);
//     printf("\nArmstrong Numbers between %d and %d:-\n", start, end);
//     while(start<=end)
//     {
//         temp = start;
//         noOfDigit=0;
//         while(temp>0)
//         {
//             temp = temp/10;
//             noOfDigit++;
//         }
//         num = start;
//         while(num>0)
//         {
//             rem = num%10;
//             pow = 1;
//             i = 0;
//             while(i<noOfDigit)
//             {
//                 pow = pow*rem;
//                 i++;
//             }
//             res = res + pow;
//             num = num/10;
//         }
//         if(res==start)
//             printf(" %d\n", res);
//         start++;
//         res = 0;
//     }
//     getch();
//     return 0;
// }






















