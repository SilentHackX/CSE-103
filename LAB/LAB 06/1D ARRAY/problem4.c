/*Write a C program to merge two arraysto third array. */


#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    // Copy elements of the first array into the merged array
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // Copy elements of the second array into the merged array
    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
}

int main() {
    int n1, n2;

    // Input size of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input elements of the first array
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input elements of the second array
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Create a merged array with size equal to the sum of the sizes of the two arrays
    int merged[n1 + n2];

    // Merge the two arrays into the merged array
    mergeArrays(arr1, n1, arr2, n2, merged);

    // Output the merged array
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
