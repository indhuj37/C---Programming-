#include <stdio.h>
main()
{
    char drink;
    printf("\nEnter your choice");
    scanf("\n%c",&drink);
    if(drink=='m')
    printf("\nYou had choosen maaza");
    else if(drink=='f')
    printf("\nYou had choosen fanta");
    else if(drink=='p')
    printf("\nYou had choosen pepsi");
    else
    printf("\nSorry drink is not available");
}
