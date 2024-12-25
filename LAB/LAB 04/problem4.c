/*Write a C program to calculate x y where x is base (an integer) and y is exponent (an integer)
as follows. The program should have a while repetition statement.
Sample Input        Sample Output
Enter base: 2
Enter exponent: 3
                        8 */

#include <stdio.h>
  int main() {
    int base, exp, result = 1;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (exp == 0 ; exp > 0 ; exp--)
    result *= base;
    {

    printf("%d\n", result);
    }
    return 0;
}
