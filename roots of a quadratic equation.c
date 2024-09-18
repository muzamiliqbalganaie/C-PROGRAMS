#include<math.h>
#include<stdio.h>
int main()
{
    double a, b, c, discriminant,root1,root2, realpart,imagpart;
    printf("Enter The Cofficients Of a , b and ,c respectively : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    discriminant = b*b - 4*a*c;
    //CONDITION FOR REAL AND DIFFERENT ROOTS
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf",root1,root2);
    }
    //condition for real and equal roots
    else if (discriminant == 0){
        root1=root2 = -b /(2 *a);
        printf("root1 = root2 = %.2lf;",root1);
    }
    //if roots are real
    else
        {
            realpart = -b / (2 * a);
            imagpart = sqrt(-discriminant) / (2 * a);
            printf("root1 = %.2lf + %.2lfi and root2 = %.2lf-%.2lfi",realpart,imagpart,realpart,imagpart);

        }
        return 0;
}
