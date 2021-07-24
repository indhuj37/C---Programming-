#include<stdio.h>
int main()
{
    int mark[20];
    int i;
    int high=0;
    int shig=0;
    printf("\nEnter the 5 student mark");
    for(i=1;i<=5;i++)
    scanf("\n%d",&mark[i]);
    printf("\nPrinting 5 student highest mark");
    for(i=1;i<=5;i++)
    if(mark[i]>high)
    high=mark[i];
    printf("\n%d",high);
    for(i=1;i<=5;i++)
    if(mark[i]>shig)
    if(mark[i]!=high)
    shig=mark[i];
    printf("\n%d",shig);
    }