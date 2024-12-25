/*Write a C program to count frequency of each element in an array. */

#include <stdio.h>

void countFrequency(int arr[], int n) {
    int visited[n];

    // Initialize the visited array to 0
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        // Skip if the element has already been counted
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the element as visited
            }
        }

        // Print the element and its frequency
        printf("Element %d appears %d times\n", arr[i], count);
    }
}

int main() {
    int n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count frequency of each element
    countFrequency(arr, n);

    return 0;
}
