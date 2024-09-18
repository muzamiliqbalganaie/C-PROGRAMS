#include <stdio.h>
int main() {
  int n;
   double arr[100];
   //range of numbers
   printf("Enter the number from 1 to 100 :");
   scanf("%d",&n);

//taking the value in an array
  for(i = 0;i < n;++i){
    printf("Enter a Number:%d",i + 1);
    scanf("%lf",&arr[i]);
  }

  // storing the largest number to arr[0] )
  for(int i = 1; i< n;++i)
  {
      if(arr[0] < arr[i]){
        arr[0] = arr[i];
      }
  }
 // for (int i = 1; i < n; ++i) {
   // if (arr[0] < arr[i]) {
     // arr[0] = arr[i];
  //  }
  //}

  printf("Largest element = %.2lf",arr[0]);
  return 0;
 // printf("Largest element = %.2lf", arr[0]);

  //return 0;
}
