/*Write a C program to input any alphabet and check whether it is vowel or consonant.*/


#include<stdio.h>


int main ()
{

    char alphabet;
    printf("Enter a Alphabet :%c");
    scanf("%c", &alphabet);


    if( alphabet == 'A'  || alphabet == 'E' || alphabet ==  'I' || alphabet ==  'O' || alphabet ==  'U')
    {
        printf(" %c is this vowel", alphabet);
    }
    else
    {
        printf(" %c is this consonat", alphabet);

    }




    return 0;
}
