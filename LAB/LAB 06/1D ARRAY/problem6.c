/*Write a C program to sort array elementsin ascending or descending order. */

#include <stdio.h>

// Function to sort the array in ascending order
void sortAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to sort the array in descending order
void sortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                // Swap arr[i] and arr[j]
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n, choice;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask the user for sorting order
    printf("Enter 1 for Ascending order or 2 for Descending order: ");
    scanf("%d", &choice);

    // Sort based on user choice
    if (choice == 1) {
        sortAscending(arr, n);
        printf("Array sorted in Ascending order: ");
    } else if (choice == 2) {
        sortDescending(arr, n);
        printf("Array sorted in Descending order: ");
    } else {
        printf("Invalid choice!\n");
        return 1;
    }

    // Output the sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
