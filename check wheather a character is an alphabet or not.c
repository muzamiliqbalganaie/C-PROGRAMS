#include<stdio.h>
int main()
{
    char c;
    printf("Enter Any CHaracter");
    scanf("%c",&c);
    if (c>='a'&&c<='z'||c>='A'&&c<='Z')
        printf("the entered character is an alphabet");
    else
        printf("the entered character is not an alphabet");
    return 0;

}
