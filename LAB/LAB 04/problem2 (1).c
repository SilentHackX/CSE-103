/*In this problem, you will develop a program that can find how many times an integer
number can be divided by Two (2).
Sample Input Sample Output
32 				5
61 				0 */




#include<stdio.h>

int main()
{
    int Num, i = 0;
   
    printf("Enter a Number: ");
    scanf("%d", &Num);
    
    while (Num % 2 == 0 && Num > 0) // Ensure Num is divisible by 2 and positive
    {
        Num /= 2; // Divide by 2
        i++;      // Increment the counter for each division by 2
    }

    printf("The number of times the number is divisible by 2: %d" , i);

    return 0;
}