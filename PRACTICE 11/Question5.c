//ARRAY

//Write the c program to display the student total and average marks

#include <stdio.h>
main()
{
    int mark[20];
    int i;
    int sum=0;
    int avg;
    printf("\nEnter the 5 student mark");
    for(i=1;i<=5;i++)
    scanf("\n%d",&mark[i]);
    printf("\nPrinting 5 student below mark");
    for(i=1;i<=5;i++)
    sum=sum+mark[i];
    avg=sum/5;
    printf("\ntotal %d",sum);
    printf("\naverage %d",avg);
}
