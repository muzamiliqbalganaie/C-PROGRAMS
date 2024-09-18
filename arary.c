// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
/*#include <stdio.h>

int main() {
  int values[5];

  printf("Enter 5 integers: ");

  // taking input and storing it in an array
  for(int i = 0; i < 5; ++i) {
     scanf("%d", &values[i]);
  }

  printf("Displaying integers: ");

  // printing elements of an array
  for(int i = 0; i < 5; ++i) {
     printf("%d\n", values[i]);
  }
  return 0;
}*/

// Program to find the average of n numbers using arrays

#include <stdio.h>
int main() {

  int marks[10], i, n, sum = 0, average;
  // int marks[10], i, n, sum = 0, average;

  printf("Enter number of elements: ");
  //printf("enter no of elements")
  scanf("%d", &n);
  //scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number :%d: ");
    scanf("%d", &marks[i]);

    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }

  average = sum / n;

  printf("Average = %d", average);

  return 0;
}
