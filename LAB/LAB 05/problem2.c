/*Write a C program to input two or more numbers from user and find maximum and minimum of the
given numbers using functions. */



#include<stdio.h>      //header file



int max ( int a,int b,int c)        // Function to find the maximum of three integers
{
    int highest;
    if (a>b && a>c)
        highest=a;
    else if (b>c && b>a)
        highest=b;
    else
        highest=c;
    return highest;
}



int min ( int a, int b, int c)          // Function to find the minimum of three integers
{
    int lowest;
    if (a<b && a<c)
        lowest=a;
    else if (b<c && b<a)
        lowest=b;
    else
        lowest=c;
    return lowest;

}



int main ()                                 // Main function
{
    int x,y,z;                              //declaration of variables

    printf("Enter three integer : ");       //user input

    scanf("%d%d%d",&x,&y,&z);               //reading for user input

    printf("Highest is : %d", max(x,y,z));      //Find and Print the Highest Number

    printf("Lowest is : %d",min(x,y,z));        //Find and Print the Lowest Number

    return 0;                                   //return statement:
}
