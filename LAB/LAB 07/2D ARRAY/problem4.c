#include<stdio.h>

int main ()
{
    int matrix1[3] [3];
    int sum = 0;
    printf("Enter the number of rows and colums [3] [3] :\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
              printf("Enter element for matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

        for (int i = 0; i < 3; i++)
            for(int j = 0 ; j < 3 ; j++)

        { if(i == j){
            sum += matrix1[i][j];

        }
        }

         printf("%d", sum);







return 0;
}
