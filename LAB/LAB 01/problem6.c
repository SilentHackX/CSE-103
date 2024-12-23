
/*Simple Sum
o Objective: Practice basic arithmetic operations.
o Task:
▪ Write a program that takes two integers from the user, calculates their
sum, and prints the result.
o Example Input: 5 and 10
o Expected Output:
Enter two integers: 5 10
Sum = 15*/


#include<stdio.h>

int main () {

int a, b ,sum;
printf("Enter two integer: ");
scanf("%d %d", &a, &b);
sum = a+b;
printf("sum : %d", sum);




return 0;
}
