#include<stdio.h>

int  fib(int n)
{

    if(n == 0 || n == 1)
    {
        return n;
    }

   return fib(n-1) + fib(n-2);

}

int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    int result = fib(x);
    printf("The fibonacci Number is %d: %d",x, result);

    return 0;



}
