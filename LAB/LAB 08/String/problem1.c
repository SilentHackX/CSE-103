
/*Problem 1: Palindrome Checker
Write a program that takes a string as input and checks if it is a palindrome. A palindrome reads the 
same backward as forward. Ignore case and spaces.
Example:
Input: "A man a plan a canal Panama"
Output: "Palindrome" */



#include<stdio.h>


int main(){

char s[30];

int length, i = 0, j,c = 0;
printf("Enter : ");
gets(s);

length = strlen(s);

j = length-1;

while( i < j){

 if (!isalnum(s[i])) {
            i++;
        } else if (!isalnum(s[j])) {
            j--;
        } else {

            if (tolower(s[i]) != tolower(s[j])) {
                c = 0;
                break;
            }
            i++;
            j--;
        }
    }

if(c = length/2)
printf("Palindrome");

else

printf("No");

}