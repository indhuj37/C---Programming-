//HIGHEST ARRAY ELEMENT



#include <stdio.h>
main()
{
    int mark[20];
    int i;
    int high=0;
    printf("\nEnter the 5 student mark");
    for(i=1;i<=5;i++)
    scanf("\n%d",&mark[i]);
    printf("\nprinting 5 student highest mark");
    for(i=1;i<=5;i++)
    if(mark[i]>high)
    high=mark[i];
    printf("\n%d",high);
}
