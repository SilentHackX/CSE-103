/*User will input a number and you have to generate the multiplication table of that number.
Input Output
3  x 0 = 0
3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30 */







#include<stdio.h>

int main () {
int num ,i =0;

printf("Enter a number : ");
scanf("%d", &num);


while (i <=10 )
{
    printf(" %d x %d = %d\n", num ,i, num*i);
    i++;
}


return 0;
}