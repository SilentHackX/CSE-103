/*In this problem you will develop a calculator which can do Addition, Subtraction,
Multiplication, Division and Modulo (Remainder). Use switch-case statements.

Sample Input Sample Output
4 + 7           = 11
7 % 3           = 1 */





#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch statement to perform the calculation
    switch(operator) {
        case '+':
            printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);

            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Invalid operator.\n");
    }

    return 0;
}
