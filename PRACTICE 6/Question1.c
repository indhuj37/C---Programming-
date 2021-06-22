#include <stdio.h>
main()
{
    int a;
    int b;
    int c;
    int ch;
    printf("\nEnter value a");
    scanf("\n%d",&a);
    printf("\nEnter value b");
    scanf("\n%d",&b);
    printf("\nEnter your choice");
    scanf("\n%d",&ch);
    if(ch==1)
    {
        c=a+b;
        printf("\n addition %d",c);
    }
    else if(ch==2)
    {
        c=a*b;
        printf("\n multiply %d",c);
    }
    else if(ch==3)
    {   
        c=a-b;
        printf("\n substraction %d",c);
    }   
    
}
