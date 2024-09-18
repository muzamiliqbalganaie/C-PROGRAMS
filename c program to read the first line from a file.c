#include<stdio.h>
#include<stdlib.h>//for exit() function
int main()
{
    char c[1000];
    FILE *fptr;

    if((fptr = fopen("program.txt","r")) == NULL)
    {
        printf("Error! File cannot be opened.");

        //program exits if the file pointer returns NULL.
        exit(1);
    }

    //reads text untill new line is encountered
    fscanf(fptr,"%[^\n^]",c);
    printf("Data from the file :\n%s",c);
    fclose(fptr);

    return 0;
}
