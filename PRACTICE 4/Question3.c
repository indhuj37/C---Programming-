
#include <stdio.h>
main()
{
    char name[10];
    int age;
    printf("\nEnter the name:");
    scanf("\n%s",name);
    printf("\nEnter the age:");
    scanf("\n%d",&age);
    if(age>18)
    printf("\neligible to vote");
    else
    printf("\nNot eligible to vote");
}

