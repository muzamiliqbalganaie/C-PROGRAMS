#include<stdio.h>
#include<string.h>
int main(){
char a[20] = "program";
char b[20] = {'P','r','o','g','r','a','m','i','n','g','\0'};

//using the %zu format specifier to print size_t
printf("Length of string a = %zu \n",strlen(a));
printf("Length of string b = %zu \n",strlen(b));
return 0;
}
