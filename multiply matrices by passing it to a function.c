#include<stdio.h>

void enterData(int Fmatrix[][10],int Smatrix[][10],int r1,int c1,int r2,int c2);
void multiplyMatrices(int Fmatrix[][10],int Smatrix[][10],int multResult[][10],int r1,int c1,int r2,int c2);
void display(int mult[][10],int r1,int c2);

int main()
{
    int Fmatrix[10][10],Smatrix[10][10],mult[10][10],r1,c1,r2,c2,i,j,k;

    printf("Enter rows and columns for first matrix : ");
    scanf("%d%d",&r1,&c1);

    printf("Enter the rows and columns for 2nd matrix : ");
    scanf("%d%d",&r2,&c2);

    //if column of ist matrix is not equal row of secound matrix ,asking the user to enter the rows and columns again.
    while(c1!=r2)
    {
        printf("Error!column of first matrix not equal to rows of 2nd matrix.");

        printf("Enter rows and columns for first matrix : ");
        scanf("%d%d",&r1,&c1);

        printf("Enter the rows and columns for 2nd matrix : ");
        scanf("%d%d",&r2,&c2);
    }
    //Function to take matrix data.
    enterData(Fmatrix,Smatrix,r1,c1,r2,c2);

    //Function to multiply two matrices.
    multiplyMatrices(Fmatrix,Smatrix,mult,r1,c1,r2,c2);

    //function to display resultant of two matricies after multiplication
    display(mult,r1,c1);

    return 0;
}

void enterData(int Fmatrix[][10],int Smatrix[][10],int r1,int c1,int r2,int c2)
{
    int i,j;
    printf("\nEnter the elements of matrix 1 : ");
    for(i = 0; i < r1;++i)
    {
        for(j = 0;j < c1;++j){
            printf("Enter the a%d%d: ",i+1,j+1);
            scanf("%d",&Fmatrix[i][j]);
        }
    }


 printf("\nEnter the elements  of 2nd matrix :\n");
 for(i = 0;i < r2 ;++i){
    for (j = 0;j < c2;++j){
        printf("Enter the b%d%d: ",i+1,j+1);
        scanf("%d",&Smatrix[i][j]);
    }
 }
}

void multiplyMatrices(int Fmatrix[][10],int Smatrix[][10],int mult[][10],int r1,int c1,int r2,int c2)
{

    int i,j,k;

    //initilizing elements of matrix mult to 0. also degree of matrix after multiplication
    for (i = 0;i < r1;++i)
    {
        for(j = 0;j < c2;++j)
        {
            mult[i][j] = 0;
        }
    }

    //multiplying matrix Fmatrix and Smatrix a nd storing in an array mult.
    for (i = 0;i < r1;++i)
    {
          for (j = 0;j < c2;++j)
          {
              for(k = 0;k < c1;++k)
              {
                  mult[i][j]+=Fmatrix[i][k] * Smatrix[k][j];
              }

          }
    }
}

void display(int mult[][10],int r1,int c2)
{
    int i,j;
    printf("\nOutput Matrix :\n");
    for(i = 0;i < r1;++i)
        {
        for(j = 0;j < c2;++j)
          {
            printf("%d    ",mult[i][j]);
            if(j == c2 -1)
                printf("\n\n");
          }
        }

}
