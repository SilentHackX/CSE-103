/*Write a C program to count total number of even and odd elements in an array. */



#include <stdio.h>

int main() {
    int P, count_even = 0, count_odd = 0;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &P);

    int num_order[P];


    for (int i = 0; i < P; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num_order[i]);


        if (num_order[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }


    printf("Even numbers: %d\n", count_even);
    printf("Odd numbers: %d\n", count_odd);

    int total_count = count_even + count_odd;
    printf("Total count of even and odd numbers: %d\n", total_count);

    return 0;
}
