
#include <stdio.h>
main()
{
    int x,y;
    printf("\nEnter the value of x:");
    scanf("\n%d",&x);
    printf("\nEnter the value of y:");
    scanf("\n%d",&y);
    if(x>y)
    printf("\n x is greater than y");
    else if(x<y)
    printf("\n x is less than y");
    else
    printf("\n x is equal to y");
    printf("\nEnd of the program");
}
