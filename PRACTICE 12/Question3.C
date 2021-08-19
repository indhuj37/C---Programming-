//ARRAY

//Write the c program to check the student name in an array

#include<stdio.h>
int main()
{
    int name[20][20];
    int i;
    printf("\nEnter the 5 student name");
    for(i=1;i<=5;i++)
    scanf("\n%s",name[i]);
    printf("\nPrinting the 5 student name below ");
    for(i=5;i>=1;i--)
    scanf("\n%s",name[i]);
}
