#include<stdio.h>

int main ()
{
    int matrix1[3] [3];
    int t;
    printf("Enter the number of rows and colums [3] [3] :\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Enter element for matrix1[%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(i<j)
            {

                t = matrix1[i] [j] ==0;
                //break;

            }
        }

    }
    if(t==0)
    {
        printf("matrix is upper tringular");

    }
    else
    {
        printf("matrix is not upper tringular");

    }
    return 0;
}
