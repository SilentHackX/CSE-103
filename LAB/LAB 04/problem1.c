
/*You will take an integer number from the user. You have to find the summation of all the digits.

Sample Input Sample Output
1234            10
678              21 */







#include<stdio.h>

int main ()
{
    int x, y = 0, z;

    printf("Enter a number : ");
    scanf("%d", &x);


    while(x>0)
    {

        z = x%10;
        y += z;
        x /= 10;


    }

    printf("%d\n",y);

    return 0;
}
