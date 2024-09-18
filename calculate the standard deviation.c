//program to calculate standard devation
 #include<math.h>
 #include<stdio.h>

 //FUNCETION TO COMPUTE STANDARD DEVATION
 double CSD(double data[])
 {
     double sum = 0.0,mean,SD = 0.0;
     int i;

     for(i = 0;i < 10;++i){
        sum += data[i];
     }
     mean = sum /10;

     for(i = 0;i < 10;++i){
        SD +=pow(data[i] - mean,2);

     }
     return sqrt(SD / 10);
 }


 int main()
 {
 int i;
 double data[10];

 //takes inputs freom user
 printf("Enter 10 Elements:");
 for(i = 0;i < 10;++i)
 {
  scanf("%lf",&data[i]);
 }

 printf("\nStandars Devation = %.6lf",CSD(data));
 return 0;
 }
