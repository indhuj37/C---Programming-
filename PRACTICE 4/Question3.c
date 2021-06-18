// IF STATEMENT

// Write the c language using If condition like which is  to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
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

