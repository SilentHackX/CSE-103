/*Implement a recursive function to find the n-th Fibonacci number, where n is provided as input.
Display the entire sequence up to n using the function.*/



#include<stdio.h>

int  fib(int n)
{

    if(n == 0 || n == 1)
    {
        return n;
    }

   return fib(n-1) + fib(n-2);

}

void printfibonaccinum(int n) {

printf("Fibonacci Number Up to %d\n", n);
for(int i = 0; i <= n; i++) {
    printf("%d ", fib(i));
}

}



int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    //int result = fib(x);
   // printf("The fibonacci Number is %d: %d",x, result);
    printfibonaccinum(x);

    return 0;



}
