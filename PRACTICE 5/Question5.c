
#include <stdio.h>
main()
{
    float perheight;
    printf("\nInput the height of the person(in centimeters):");
    scanf("\n%f",&perheight);
    if(perheight<150.0)
    printf("\nThe person is dwarf");
    else if((perheight>150.0)&&(perheight<105.0))
    printf("\nThe person is average heighted");
    else if((perheight>165.0)&&(perheight<185.0))
    printf("\nThe person is taller");
    else
    printf("\nThe person is giant");
}
