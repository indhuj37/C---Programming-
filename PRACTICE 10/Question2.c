
#include <stdio.h>
main()
{
int i=1;
int a=2;
char ch;
do
{
for(i=1;i<=10;i++)
printf("\n%d x %d = %d",a,i,a*i);
printf("\nwant to continue");
scanf("\n %c",&ch);
}
while(ch=='y');
}
