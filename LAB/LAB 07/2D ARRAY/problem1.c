#include<stdio.h>

int main() {

    int matrix1[2][2];
    int matrix2[2][2];
    int sum[2][2];


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter element for matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }



    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter element for matrix2[%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }



    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
