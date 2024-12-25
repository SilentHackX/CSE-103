/*You will take several integer numbers as inputs until the user enters -1. Then calculate the
difference between the Highest and Lowest number.
Sample Input Sample Output
7 5 1 9 5 -1         8
0 7 8 4 9 -1         9 */






#include<stdio.h>
int main ()
{
    int x ,y , z ;
    printf("Enter a integer number :");
    scanf("%d",&x);
    y=z=x;

    while (1)
    {
        scanf("%d",&x);
        if (x==-1)
            break;
        else if (x>y)
            y=x;
        else if (x<z)
            z=x;

    }
    printf("Difference is %d",y-z);

    return 0;
}
