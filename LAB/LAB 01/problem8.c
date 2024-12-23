/*Addition and Multiplication in One Program
o Objective: Combine multiple operations within a single program.
o Task:
▪ Write a program that takes two integers, calculates their sum and product,
and displays both results.
o Example Input: 4 and 7
o Expected Output:
Enter two integers: 4 7
Sum = 11
Product = 28*/


#include<stdio.h>


int main ()
{
    int a;
    int b;
    int sum;
    float product;

    printf("Enter two integer: ");
    scanf("%d %d", &a, &b);
    sum = a+b;
    printf("sum : %d\n", sum);
    product = a*b;
    printf("product = %.0f", product);






    return 0;
}
