
#include <stdio.h>
main()
{
    int mark[20];
    int i;
    int less=100;
    printf("\nEnter the 5 student mark:");
    for(i=1;i<=5;i++)
    scanf("\n%d",&mark[i]);
    printf("\nPrinting the 5 student lowest mark");
    for(i=1;i<=5;i++)
    if(mark[i]<less)
    less=mark[i];
    printf("\n%d",less);
}
