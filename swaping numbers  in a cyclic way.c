/*#include <stdio.h>
void cyclicSwap(int *a, int *b, int *c);
int main() {
    int a, b, c;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a, b, c);

    cyclicSwap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a, b, c);

    return 0;
}

void cyclicSwap(int *n1, int *n2, int *n3) {
    int temp;
    // swapping in cyclic order
    temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
}*/
#include<stdio.h>
void cyclicSwap(int *a ,int *b, int *c);
int main(){
int a, b ,c;
printf("Enter a,b,and c respectively: ");
scanf("%d %d %d",&a,&b,&c);
printf("value before swapping :\n");
printf("a = %d \nb = %d\nc = %d\n",a,b,c);

cyclicSwap(&a,&b,&c);

printf("value After Swapping:\n");
printf("a = %d\nb = %d\nc = %d\n",a,b,c);
return 0;

}
void cyclicSwap(int *n1,int *n2,int *n3){
int temp;
//swapping in acyclic order
temp = *n2;//*n2 = b.  b =temp;
*n2 = *n1;//*n2 = b ,*n1 = a. b = a;
*n1 = *n3;//*n3 = c ,  a = c
*n3 = temp;//*n3 = c ,temp = a ,.. c = temp(a)
}
