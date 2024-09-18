#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    printf("\nplease enter the number\n");
    printf("1 for india\n2 for pakistan\n3 for bangladesh\n............4 for china\n");
    scanf("%d",&i);

    switch(i)
    {
        case 1:
        printf("india");
        break;

        case 2:
        printf("pakistan");
        break;

        case 3:
        printf("bangledesh");
        break;

        case 4:
        printf("china");
        break;

        default:
        printf("not valid entry");
        break;
    }
    return 0;

}
