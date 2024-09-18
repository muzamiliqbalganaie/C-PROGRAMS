#include<stdio.h>
int main()
{
    int a[10][10],transpose[10][10],i,j,r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);

    //taking inputs from user
    for(i=0;i<r;++i)
        for(j=0;j<c;++j){
            printf("enter value for a%d%d",i+1,j+1);
            scanf("%d",&a[i][j]);


    }
}

//displaying the elemements of a[][]matri
  printf("\nEntered matrix is \n");
   for(i=0;i<r;++i)
  for(j=0;j<c;++j){
    printf("%d",a[i][j]);
    if(j==c-1)
        print("\n\n");


 }

//finding the transpose o
for(i=0;i<r;++i){
    for(j=0;j<c;++j){
  transpose[j][i]=a[i][j];
    }


    //displaying the transposeof a[][]matrix
printf("\n transpose of a matrix is :\n")
    for(i=0;i<c;++i)
        for(j=0;j<r;++j){
            printf("%d  ", transpose[i][j]);
            if(j==r-1)
                printf("\n\n");

        }

return 0;
}
