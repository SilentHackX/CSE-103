/*Multiplication of Two Numbers
o Objective: Use scanf to read floating-point inputs and perform multiplication.
o Task:
▪ Write a program that takes two floating-point numbers as input, multiplies
them, and displays the result.
o Example Input: 1.5 and 2.0
o Expected Output:
Enter two numbers: 1.5 2.0
Product = 3.000000*/

#include<stdio.h>

int main ()
{

    float a, b, product;
    printf("Enter two numbers : ");
    scanf("%f%f", &a, &b);

    product = a*b;

    printf("product = %f", product);





    return 0;
}
