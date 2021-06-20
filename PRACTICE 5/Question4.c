
#include <stdio.h>
main()
{
    char name[23];
    int marks;
    printf("\nEnter the name:");
    scanf("\n%s",name);
    printf("\nEnter the marks:");
    scanf("\n%d",&marks);
    if(marks>90)
    printf("\n GRADE A");
    else if(marks>75)
    printf("\n GRADE B");
    else if(marks>65)
    printf("\n GRADE C");
    else if(marks>55)
    printf("\n GRADE D");
    else
    printf("\n GRADE E");
}
