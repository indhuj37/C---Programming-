
#include <stdio.h>
main()
{
    int a;
    int b;
    int c;
    int d;
    printf("\nEnter the value for a:");
    scanf("\n%d",&a);
    printf("\nEnter the value for b:");
    scanf("\n%d",&b);
    printf("\nEnter the value for c:");
    scanf("\n%d",&c);
    printf("\nEnter the value for d:");
    scanf("\n%d",&d);
    if((a>b)&&(a>c)&&(a>d))
    printf("\nthe value for a is greater");
    else if((b>a)&&(b>c)&&(b>d))
    printf("\nthe value for b is greater");
    else if((c>a)&&(c>b)&&(c>d))
    printf("\nthe value for c is greater");
    else
    printf("\n the value for d is greater");
}
