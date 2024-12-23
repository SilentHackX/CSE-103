
/*Display Different Data Types
o Objective: Practice declaring variables of various data types and printing them
using format specifiers.
o Task:
▪ Declare and initialize the following variables:
▪ int num = 10;
▪ char letter = 'A';
▪ float decimal = 3.14;

▪ double largeDecimal = 9.87654321;
▪ Use printf with appropriate format specifiers to display each variable
on a new line.
o Expected Output:
Integer: 10
Character: A
Float: 3.14
Double: 9.87654321*/


#include<stdio.h>
int main()
{

    int num = 10;
    char letter = 'A';
    float decimal = 3.14;
    double largedecimal = 9.87654321;

    printf(" integer : %d\n ", num);
    printf("character : %c\n", letter);
    printf(" float : %.2f\n", decimal);
    printf(" double : %.8lf\n", largedecimal);

    return 0;
}
