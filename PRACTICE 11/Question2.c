//ARRAY

//Write the  c program to display roll no of the student
#include<stdio.h>
main()
{
    int rollno[20];
    int i;
    printf("\nEnter the 5 student rollno");
    for(i=1;i<=5;i++)
    scanf("\n%d",&rollno[i]);
    printf("\nPrinting below 5 student rollno");
    for(i=1;i<=5;i++)
    printf("\n%d",rollno[i]);
    
}
