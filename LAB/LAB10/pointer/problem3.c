
#include <stdio.h>


int main() {
    int number1, number2, result;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    ptr1 = &number1;
    ptr2 = &number2;

    result = (*ptr1) * (*ptr2); 

    printf("Multiplication result = %d\n", result);

    return 0;
}




