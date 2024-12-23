/*Write a C program to convert specified days into years, weeks and days. Note: Ignore leap
year. Test Data : Number of days : 1329 Expected Output : Years: 3 Weeks: 33 Days: 3

Sample Input Sample Output
Number of days : 1329 Years: 3
Weeks: 33
Days: 3*/


#include<stdio.h>

int main () {

int days;

printf("Enter a number of days : ");
scanf("%d", &days);


if( days / 365 ) {
    printf("years is : %d", days);
}
//else if()




return 0;
}
