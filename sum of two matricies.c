#include<stdio.h>
int main()
{
    int r ,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of rows(between 1 and 100):");
    scanf("%d",&r);
    printf("Enter the number of colums(between 1 and 100): ");
    scanf("%d",&c);

    //defining 1st matrix a
    printf("Enter the elements of 1st matrix:\n");
    for(i = 0;i < r;++i)
    for(j = 0;j < c;++j){
        printf("Enter the element a%d%d :",i+1,j+1);
        scanf("%d",&a[i][j]);

    }
    //defining 2nd matrix b
    printf("Enter the elements of 2nd matrix:\n");
    for(i = 0;i < r; ++i)
    for(j = 0;j < c; ++j){
        printf("Enter the elements of b%d%d :",i+1,j+i);
        scanf("%d",&b[i][j]);
    }
        //adding two matricies
        for(i =0;i < r;++i)
        for(j =0;j < c;++j){
            sum[i][j] = a[i][j] + b[i][j];

        }

        //printing the result
        printf("\nSum of two matrices: \n");
        for(i = 0;i < r;++i)
        for(j = 0;j < c;++j){
            printf("%d   ",sum[i][j]);
            if(j == c-1){
                printf("\n\n");
            }
        }
}
