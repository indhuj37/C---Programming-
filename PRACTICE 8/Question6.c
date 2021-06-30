
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
