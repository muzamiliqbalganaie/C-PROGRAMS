#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, n ,*ptr,sum = 0;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    //calloc function ;syntax;ptr = (casttype*)calloc(n,sizeof(casttype);
    ptr = (int*)calloc(n ,sizeof (int));

    //if memory not allocated
    if(ptr == NULL){
        printf("Error!!! memory not allocated.");
    exit(0);
    }
printf("Enter the numbers:");
for(i = 0;i < n;++i){
    scanf("%d",ptr + i);
    sum += *(ptr + i);

}
printf("sum = %d",sum);

//deallocating memory we use free(casttype) function
free(ptr);

return 0;
}
