
#include <stdio.h>
main()
{
int a;
int b;
int c;
char ch;
do
{
printf("\nEnter the value a:");
scanf("\n%d",&a);
printf("\nEnter the value b:");
scanf("\n%d",&b);
c=a+b;
printf("\nThe addition value of a and b is %d",c);
printf("\nwant to continue");
scanf("\n%c",&ch);
}
while(ch=='y');
}
