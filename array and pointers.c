/*#include <stdio.h>
int main() {
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(data + i));
    return 0;
}
*/

#include<stdio.h>
int main()
{
    int data[5];

    printf("\nEnter the elements : ");
    for(int i = 0;i < 5;++i)
    scanf("%d",data + i);  //data + 1 =&data[i];

    printf("you entered : \n");
    for(int i = 0;i < 5; ++i)
         printf("%d\n",*(data + i));  //data[i] =*(data + i);
    return 0;
}

