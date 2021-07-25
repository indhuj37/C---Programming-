#include<stdio.h>
main()
{
    int name[20][20];
    int i;
    printf("\nEnter the 5 student name");
    for(i=1;i<=5;i++)
    scanf("\n%s",name[i]);
    printf("\nPrinting the 5 student below mark");
    for(i=1;i<=5;i++)
    printf("\n%s",name[i]);
}
