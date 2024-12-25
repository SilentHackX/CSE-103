/*The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined
as follows:
n! = n · (n – 1) · (n – 2) · ... · 1 (for values of n greater than 1)
and n! = 1 (for n = 0 or n = 1).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
Write a program that reads a nonnegative integer, and computes and prints its factorial. */

#include<stdio.h>

int main ()
{

    int x, fact = 1;
    printf("Enter a nonnegative number : ");
    scanf("%d", &x);

    for(int i = 1; i <= x ; i++)
        fact *= i;

    printf("its a factorial : %d", fact);

    return 0;
}
