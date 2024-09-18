#include<stdio.h>
struct TIME {
int secounds;
int minutes;
int hours;
};
void differenceBetweenTimeperiod(struct TIME t1,
                                 struct TIME t2,
                                 struct TIME *diff);


int main() {
  struct TIME startTime, stopTime, diff;

  printf("Enter the start time. \n");
  printf("Enter hours ,minutes and secounds: ");
  scanf("%d%d%d",&startTime.hours,
                 &startTime.minutes,
                 &startTime.secounds);

  printf("Enter the stop time. \n");
  printf("enter hours ,minutes and secounds:" );
  scanf("%d%d%d",&stopTime.hours,
        &stopTime.minutes,
        &stopTime.secounds);


  //DIFFERENCE BETWEEN START AND STOP TIME
  differenceBetweenTimeperiod(startTime,stopTime,&diff);
  printf("\nTime Difference: %d:%d:%d - ",startTime.hours,
         startTime.minutes,
         startTime.secounds);

  printf("%d:%d:%d ",stopTime.hours,
         stopTime.minutes,
         stopTime.secounds);

  printf("=%d:%d:%d\n",diff.hours,
         diff.minutes,
         diff.secounds);

  return 0;
}

//COMPUTE DIFFERENCE BETWEEN THE PERIODS
void differenceBetweenTimeperiod(struct TIME start,
                                 struct TIME stop,
                                 struct TIME *diff)
 {
     while(stop.secounds > start.secounds) {
        --start.minutes;
        start.secounds += 60;
     }
     diff->secounds = start.secounds - stop.secounds;
     while(stop.minutes > start.minutes) {
        --start.minutes;
        start.minutes += 60;
     }
     diff->minutes = start.minutes - stop.minutes;
     diff->hours = start.hours - stop.hours;

 }





















