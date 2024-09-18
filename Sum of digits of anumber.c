//switch case not sum of two digits

#include<stdio.h>
#include<conio.h>
void main()

{
    int i;
    printf("Please Enter Your Choice >:\n");
    printf("1-India\n,2-pakistan\n,3-china\n,4-sri lanka\n,5-nepal\n,6-bangladesh \n");
    scanf("%d",&i);

    switch(i)
{
    case 1 :
    printf("INDIA");
    break;

    case 2:
    printf("PAKISTAN");
    break;

    case 3:
    printf("CHINA");
    break;

    case4:
    printf("SRI LANKA");
    break;

    case 5:
    printf("NEPAL");
    break;

    case 6:
    printf("BANGLADESH");
    break;

    default:
        printf("Invalid Choice");
        break;



    }
    return 0;
}
