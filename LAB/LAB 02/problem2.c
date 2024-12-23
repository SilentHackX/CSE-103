/*Write a C program to check whether a number is negative, positive or zero.*/

#include<stdio.h>

int main ()
{

    int x;

    printf("Enter a number : ");
    scanf("%d", &x);

    if(x>0)
    {
        printf("Number is positive : %d\n", x);

    }
    else if (x == 0)
    {
        printf("Number is zero : %d\n", x);
    }
    else if(x<0)
    {
        printf("Number is negative : %d",x);
    }




    return 0;
}
