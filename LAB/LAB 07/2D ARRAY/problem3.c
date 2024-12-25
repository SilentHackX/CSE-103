#include <stdio.h>

int main() {
    int matrix1[2][2];
    int matrix2[2][2];
    int result[2][2];
    int sum;

    printf("Enter the  elements of first matrix : \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {

            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the  elements of second matrix : \n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {

            scanf("%d", &matrix2[i][j]);

        }
    }


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
           sum = 0;
            for(int k = 0; k < 2; k++) {
                sum += matrix1[i][k] * matrix2[k][j];

            }
            result[i][j] = sum;

        }
    }


    printf("Result of  Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
