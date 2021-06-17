
#include <stdio.h>
main()
{
    float a;
    float b;
    float c;
    float d;
    printf("\nEnter the value for a:");
    scanf("\n%f",&a);
    printf("\nEnter the value for b:");
    scanf("\n%f",&b);
    printf("\nEnter the value for c:");
    scanf("\n%f",&c);
    d=a+b+c/3;
    printf("\nThe average of a,b and c is %f",d);
}
