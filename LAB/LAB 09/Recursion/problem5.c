/*Create a recursive function to calculate the sum of the digits of a given integer n. For example, if n
= 1234, the result should be 1 + 2 + 3 + 4 = 10.*/



#include<stdio.h>

int sumofdigit(int n)
{
    int r;

    if(n == 0)
    {
        r = 0;
        return r;

    }
    return n % 10 + sumofdigit(n / 10);

}



int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    int sum = sumofdigit(x);

    printf(" result of sum %d : %d", x,sum);
    return 0;
}
