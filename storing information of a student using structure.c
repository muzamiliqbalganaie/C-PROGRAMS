#include <stdio.h>
struct student {
char firstname[50];
int roll;
float marks;
}s[5];

int main() {
 int i;
 printf("Enter the information of student:\n ");

 //storing information
 for(i=0; i<5;i++) {
     s[i].roll = i + 1;
     printf("\nFor roll Number %d,\n",s[i].roll);
     printf("Enter first name: ");
     scanf("%s",&s[i].firstname);
     printf("Enter marks: ");
     scanf("%f",&s[i].marks);
     }
     //displaying information
     printf("Displaying Information:\n\n");
     for(i=0;i<5;i++) {
     printf("\nRoll number: %d\n",i+1);
     printf("First name: ");
     puts(s[i].firstname);
     printf("Marks : %.lf",s[i].marks);
     printf("\n");


     }
     return 0;
}

