//WHILE LOOP

//Write the c program to display the name 10 times in while loop
#include <stdio.h>
main()
{
    int i=1;
    char name[20];
    printf("\nEnter the name:");
    scanf("\n%s",name);
    while(i<=10)
    {
      printf("\n%s",name);
      i++;
    }
}
