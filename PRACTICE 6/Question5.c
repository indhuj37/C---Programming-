// char datatype 

//Write the c program for the student to select the course they want
#include <stdio.h>
main()
{
    char course;
    printf("\nEnter the course");
    scanf("\n%c",&course);
    if(course=='c')
    printf("\n You have selected c language");
    else if(course=='p')
    printf("\n You have selected python language");
    else if(course=='J')
    printf("\n You have selected Java language");
    else
    printf("\nSorry no other course");
}
