/*Write a C program to find minimum between two numbers.*/

#include<stdio.h>

int main()
{

    int x,y;
    printf("Enter a number : ");
    scanf("%d%d", &x,&y);

    if(x>y)
    {
        printf("maximum number : %d\n", x);

    }
    else if (x<y)
    {
        printf("minimum number : %d", y);
    }




    return 0;
}
