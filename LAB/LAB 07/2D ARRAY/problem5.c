/*write a c program to interchange diagonals of a matrix*/


#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);


    int matrix[n][n];

    printf("\nEnter the elements of the matrix row by row:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - 1 - i];
        matrix[i][n - 1 - i] = temp;
    }

    printf("\nMatrix after interchanging the diagonals:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("  %d", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
