/*Write a function integerPower(base, exponent) that returnsthe value of baseexponent

. For exam- ple, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer,
and base is an integer. Function integerPower should be used to control the calculation. Do not use
any math library functions. */


 //header file

#include <stdio.h>


 //function definition
int integerPower(int base, int exponent)
{
    int result = 1;                         //variable initialization:



        //for loop

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;                      //return statement

}

    //main function

int main()
{
    int b, e;                           //variable declaration


    printf("Enter the base and the exponent:");
                                                    //user input
    scanf("%d%d", &b, &e);



    printf("Result : %d\n",integerPower(b, e));                 //function call = integerPower(b, e)

    return 0;
}
