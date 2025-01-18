
#include <stdio.h>



int main() {
    int number, j;

    printf("Enter the size of the array: ");
    scanf("%d", &number);

    int array[number];
    int *ptr = array;

    printf("Enter %d elements:\n", number);
    for (j = 0; j < number; j++) {
        scanf("%d", (ptr + j));
    }

    printf("Array elements are:\t");
    for (j = 0; j < number; j++) {
        printf("%d ", *(ptr + j));
    }
    printf("\t");

    return 0;
}





