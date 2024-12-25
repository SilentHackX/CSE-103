/*Write a function that takes the radius of a circle and returns the area of that circle. Write another
function that takes area as parameter and determines whether the area is greater than 25 or not. If
the area is greater than 25 then print ”Greater than 25” or else “Less than 25”. Call both functions
from the main. */


 //header file
#include <stdio.h>                          // This includes the standard input/output library

#define PI 3.141592                             //This line defines a constant PI that represents the value of pi, which is used in the area calculation

 //area calculation function
float area(float radius)
{
    return PI * radius * radius;                     //Area = PI * r^2

}

 //cheek function

void check(float area)
{
    if (area > 25)
    {
        printf("It is greater than 25\n");
    }
    else
    {
        printf("It is less than 25\n");
    }
}

 //main function

int main()
{
    float r, a;


    printf("Enter the radius and the area of the circle:");
    scanf("%f ", &r);


    a = area(r);
    printf("Calculated Area: %.2f\n", a);


    check(a);

    return 0;
}
