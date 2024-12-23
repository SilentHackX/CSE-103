
/*User Input for Single Value
o Objective: Learn to take input from the user using scanf.
o Task:
▪ Write a program that asks the user to enter an integer, character, float, and
double, then prints each value.

o Expected Output:
Enter an integer: 25
You entered: 25
Enter a character: B
You entered: B
Enter a float: 2.718
You entered: 2.718
Enter a double: 1.23456789
You entered: 1.23456789*/


#include<stdio.h>

int main ()
{

    int num;
    char letter;
    float decimal;
    double largedecimal;


    printf("Enter an integer : ");
    scanf("%d", &num);
    printf("you entered : %d\n", num);

    printf("Enter a character :  ");
    scanf(" %c", &letter);
    printf("you entered : %c\n", letter);

    printf("Enter a float : ");
    scanf(" %f", &decimal);
    printf("you entered :%.3f\n", decimal);

    printf("Enter a double : ");
    scanf(" %lf", &largedecimal);
    printf("you entered : %.8lf ", largedecimal);






    return 0;
}
