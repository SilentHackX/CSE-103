/*Write a C program to find maximum between three numbers.*/

#include<stdio.h>

int main ()
{

    int x, y, z;

    printf("Enter a numbers : ");
    scanf("%d", &x);

    printf("Enter a numbers : ");
    scanf("%d", &y);

    printf("Enter a numbers : ");
    scanf("%d", &z);

    if(x >=y && x >= z )
    {

        printf("maximum number is : %d", x);
    }
    else if(y >=z && y >= x )
    {
        printf("maximum number is : %d ", y);

    }
    else
    {
        printf("minimum number is : %d", z);
    }




    return 0;
}
