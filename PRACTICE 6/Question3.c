//CHARDATA TYPE

//Write the c program to check whether vowels or not using char datatype
#include <stdio.h>
main()
{
    char vowel;
    printf("\nEnter the vowel");
    scanf("\n%c",&vowel);
    if(vowel=='a')
    printf("\n a is vowel");
    else if(vowel=='e')
    printf("\n e is vowel");
    else if(vowel=='i')
    printf("\n i is vowel");
    else if(vowel=='o')
    printf("\n o is vowel");
    else if(vowel=='u')
    printf("\n u is vowel");
    else
    printf("\n Sorry not a vowel");
}
