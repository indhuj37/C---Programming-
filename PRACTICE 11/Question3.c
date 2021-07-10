//ARRAY

//SUM ARRAY ELEMENT

//Write the c program to display the student mark and total 
#include<stdio.h>
main()
{
    int mark[20];
    int i;
    int sum=0;
    printf("\nEnter the 5 student mark");
    for(i=1;i<=5;i++)
    scanf("\n%d",&mark[i]);
    printf("\nPrinting below 5 student mark");
    for(i=5;i>=1;i--)
    sum = sum+mark[i];
    printf("\n%d",sum);
}
