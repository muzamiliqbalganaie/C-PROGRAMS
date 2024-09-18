#include<stdio.h>

//Function to get matrix elements entered by the user
void getMatrixElements(int matrix[][10],int row,int column)
{
    printf("Enter the elements: \n");
 for(int i = 0;i < row; ++i)
 {
       for(int j = 0;j < column; ++j)
    {
        printf("Enter a%d%d : ",i+1,j+1);
        scanf("%d",&matrix[i][j]);

    }
 }
}


//Function to multiply two matricies.
void multiplyMatrices(int first[][10],int secound[][10],int result[][10],int r1,int c1,int r2,int c2,)
{
    //initializing elements of matrix mult to 0.
    for(int i = 0; i < r1; ++i)
    {
        for( int j= 0; j < c2; ++j)
        {
                for( int k = 0; k < c1; ++k)
           {
            result[i][j]+=first[i][k] *secound[k][j];
           }
        }
    }
}

//Function to display the matrix.
void display (int result[][10],int row,int column)
{
printf("\nOutput Matrix :\n");
for(int i=0;i<row;++i)
    {
        for(int j=0;j<column;++j)
        {
            printf("%d ",result[i][j]);
            if(j==colum-1)
                printf("\n");

        }
   }
}

int main()
{
    int first[10][10],secound[10][10],result[10][10],r1,r2,c1,c2,k;

    printf("Enter rows and columns for the first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for the secound matrix :");
    scanf("%d%d",&r2,&c2);

    //taking input untill
    //1st matrix columns is not equal to 2nd matrix row
    while(c1!=r2){
        printf("Error! Enter rows and columns again.\n");

    printf("Enter rows and columns for the first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter rows and columns for the secound matrix :");
    scanf("%d%d",&r2,&c2);

    }

    //Get elements of the first matrix
    getMatrixElements(first,r1,r2);

    //Get elements of the secound matrix.
    getMatrixElements(secound,r2,c2);

    //multiply two matrices.
    multiplyMatrices(first,secound,result,r1,c1,r2,c2);

    //display the result
    display(result,r1,c2);

    return 0;
}






















