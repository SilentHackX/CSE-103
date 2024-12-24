/*Write a program that takes an integer input representing a student&#39;s score. If the score is 40
or above, print &quot;Pass&quot;; otherwise, print &quot;Fail&quot;. Use the ternary operator.
Sample Input Sample Output
    39             Fail
    72             Pass */






#include<stdio.h>

int main ()
{
    int  marks;


    printf("Enter a mark of subject : ");
    scanf("%d", &marks);


    (marks>=40 ) ? printf(" you  are pass") : printf("you are fail");





    return 0;
}
