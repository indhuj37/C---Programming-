// IF STATEMENT

// Write the c language using If condition like which is to check whether a given number is even or odd
#include <stdio.h>
main()
{
    int num;
    printf("\nCheck whether even or odd:");
    scanf("\n%d",&num);
    if(num%2==0)
    printf("\n%d is even",num);
    else
    printf("\n%d is odd",num);
}
