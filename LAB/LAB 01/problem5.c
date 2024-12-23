
/*ASCII Value

o Objective: Understand how to retrieve ASCII values of characters.
o Task:
▪ Write a program that prompts the user to enter a character and displays its
ASCII value.
o Example Input: Z
o Expected Output:
Enter a character: Z
ASCII value of Z is 90*/

#include<stdio.h>

int main () {
char letter;

printf("Enter a character: ");
scanf("%c", &letter);
printf("%i", letter);




return 0;
}
