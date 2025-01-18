
#include <stdio.h>



int main() {
    int number1, number2, temporary;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    ptr1 = &number1;
    ptr2 = &number2;

    printf("Before swap: number1 = %d, number2 = %d\n", *ptr1, *ptr2);

    temporary = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temporary;

    printf("After swap: number1 = %d, number2 = %d\n", *ptr1, *ptr2);

    return 0;
}


