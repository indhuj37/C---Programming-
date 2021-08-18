//C

//Write the c program to check the student studying the course
#include<stdio.h>
 int main()
{
   int course[20][20];
   int i;
   printf("\nEnter the 5 student course");
   for(i=1;i<=5;i++)
   scanf("\n%s",course[i]);
   printf("\nprinting the 5 student below mark");
   for(i=1;i<=5;i++)
   printf("\n%s",course[i]);
}
