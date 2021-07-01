//Write the c program to display the average of a,b and c

#include <stdio.h>
main()
{
    float a;
    float b;
    float c;
    float d;
    char ch;
    do
    {
    printf("\nEnter the value a");
    scanf("\n%f",&a);
    printf("\nEnter the value b");
    scanf("\n%f",&b);
    printf("\nEnter the value c");
    scanf("\n%f",&c);
    d=(a+b+c)/3;
    printf("\nthe average of a,b and c is%f",d);
    printf("\nwant to continue");
    scanf("\n%c",&ch);
    }
    while(ch=='y');
}
