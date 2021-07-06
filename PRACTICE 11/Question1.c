//ARRAY

//Storing more data in single variable.
//an array is a collection of data items,all of the same type,accessed using a common name.

//Write the c program to display the student mark 
#include <stdio.h>
main()
{
int mark[20];
int i;
printf("\nEnter the 5 student mark");
for(i=1;i<=5;i++)
scanf("\n%d",&mark[i]);
printf("\nPrinting below 5 student mark");
for(i=1;i<=5;i++)
printf("\n%d",mark[i]);
}
