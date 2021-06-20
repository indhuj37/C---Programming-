//IF ELSE CONDITION

// Write the c language for Greatest among 3 numbers
#include <stdio.h>
main()
{
    int a;
    int b;
    int c;
    printf("\n Enter the value for a");
    scanf("\n%d",&a);
    printf("\nEnter the value for b");
    scanf("\n%d",&b);
    printf("\nEnter the value for c");
    scanf("\n%d",&c);
    if((a>b)&&(a>c))
    printf("\nthe value for a is greater");
    else if((b>a)&&(b>c))
    printf("\nthe value for b is greater");
    else
    printf("\nthe value for c is greater");
}
