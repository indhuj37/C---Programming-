
#include <stdio.h>
main()
{
    int a;
    int b;
    int c;
    char ch;
    printf("\nEnter value a");
    scanf("\n%d",&a);
    printf("\nEnter value b");
    scanf("\n%d",&b);
    printf("\nEnter the choice");
    scanf("\n%c",&ch);
    if(ch =='+')
    {
        c=a+b;
        printf("\naddition%d",c);
    }
    else if(ch =='-')    
    {
        c=a-b;
        printf("\nsubstraction%d",c);
    }
    else if(ch =='*')
    {
        c=a*b;
        printf("\nMultiplication%d",c);
    }
    else if(ch =='/')
    {
        c=a/b;
        printf("\nDivision%d",c);
    }
    
}