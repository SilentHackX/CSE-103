/*The greatest common divisor (GCD) of two integers is the largest integer that evenly divides each of
the two numbers. Write a function gcd thatreturnsthe greatest common divisor oftwo integers. */



#include <stdio.h>      //header file


        //gcd function
 int gcd(int a, int b) {
    while (b != 0) {
        int gcd = b;
        b = a % b;                  // Remainder of a divided by b
        a = gcd;                   // Update a to b
    }
    return a;                       // GCD is found ( a contains the GCD, which is then returned)
}


    //main function
 int main() {
    int num1, num2;

    // Input from user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate GCD
    int result = gcd(num1, num2);

    // Output the result
    printf("The GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
