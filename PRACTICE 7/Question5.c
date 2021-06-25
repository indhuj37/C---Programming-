//FOR LOOP

//Write the c program to display number in reverse order

#include <stdio.h>
main()
{
    int i,num;
    printf("\nInput a number:");
    scanf("\n%d",&num);
    for(i=1; i<=5; i++)
    printf("\n%d",i);
    printf("\nThe number in reverse order is:");
    scanf("\n%d",&num);
    for(i=5; i>=1; i--)
    printf("\n%d",i);
}
