/*Develop a function that takes two integers as parameters and returns the count of numbers that
are divisible by 5 and 7 in that range. Call the function from main and print the result. */



#include<stdio.h>                                   //header file

int start, end, count = 0;                          //global variable declarations

int countdivisibleby5and7(int start,int end)        //function to count numbers divisible by 5 and 7
{



    for(int i = start ; i<= end ; i++)
    {


        if(i%5 == 0 && i%7 == 0)
            count++;
    }
    return count;
}

int main()                                          //main function

{

    int start,end, result = 0;                      //variable declarations

    printf("Enter the start of the range:");            //input from the User
    scanf("%d", &start);

    printf("Enter the start of the range:");
    scanf("%d", &end);


    result = countdivisibleby5and7( start, end);        // function call

    printf("result :%d", result);                                 //output


    return 0;                                          // return Statement





}

