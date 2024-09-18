//program to calculate the area of circle
/*#include<stdio.h>
#define PI 3.1415

int main()
{
    float radius,area;
    printf("Enter the radius:");
    scanf("%f",&radius);

    //NOTICE USE OF PIE
    area = PI*radius*radius;
    printf("area=%.2f",area);
    return 0;
}*/
//using #define pre processor
/*
#include <stdio.h>
#define PI 3.1415
#define circleArea(r) (PI*r*r)

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = circleArea(radius);
    printf("Area = %.2f", area);

    return 0;
}
//program to print time program.
#include<stdio.h>
int main(){
printf("CURRENT TIME: %s",__TIME__);
}*/

#include<stdio.h>
int main(){
FILE *fp;
int c;

//open the current input file
fp = fopen(__FILE__,"r");

do{
    c = getch(fp); //reads character
    putchar(c); //display character

}
while(c != EOF); //loop untill the end of file is reached

fclose(fp);
return 0;
}


















