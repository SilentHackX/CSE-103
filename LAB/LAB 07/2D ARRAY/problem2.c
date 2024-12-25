#include <stdio.h>

int main() {
    int matrix1[2][2];
    int matrix2[2][2];
    int p = 1;

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                p = 0;
                break;
            }
        }
        if (p == 0)
        break;
    }

    if (p == 1) {
        printf("Matrices are equal\n");
    } else {
        printf("Matrices are not equal\n");
    }

    return 0;
}
