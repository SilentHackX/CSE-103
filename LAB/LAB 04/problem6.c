/*Write a program in C to check whether a number is a palindrome or not.
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number. */



#include <stdio.h>

int main() {

    int A , B  = 0,  C , D ;


    printf("Input a number: ");
    scanf("%d", &A);

    D = A;


    for (A == 0; A > 0; A /= 10) {
        C = A % 10;
        B = B * 10 + C;
    }


    if ( D == B) {
        printf("%d is a palindrome number.\n", D);
    } else {
        printf("%d is not a palindrome number.\n", D);
    }

    return 0;
}
