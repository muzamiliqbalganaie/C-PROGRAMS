#include <stdio.h>
#include <string.h>

typedef struct student  {
   char name[50];
   char depertmant[50];
   char subject[100];
   int student_id;
} student;

int main( ) {

   student student;

   strcpy( student.name, "muzamil iqbal");
   strcpy( student.depertmant, "bachelor of computer");
   strcpy( student.subject, "c++");
   student.student_id = 13;

   printf( "student name : %s\n",student.name);
   printf( "student depertmant : %s\n",student.depertmant );
   printf( "student subject : %s\n",student.subject );
   printf( "student_id : %d\n",student.student_id);

   return 0;
}
