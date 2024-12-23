
/*User Input for Multiple Values
o Objective: Practice reading multiple inputs in one line and displaying them.
o Task:
▪ Write a program that takes an integer, a float, and a character as input in a
single line, then prints them.
o Example Input: 5 3.1415 X
o Expected Output:
Enter an integer, a float, and a character: 5 3.1415 X
Integer: 5
Float: 3.1415
Character: X*/





#include<stdio.h>

int main ()
{

    int num;
    float decimal;
    char letter;
//printf("Integer : ");
    scanf("%d", &num);
    printf("Integer :%d\n", num);

//printf("Float: ");
    scanf("%f", &decimal);
    printf("Float :%.5f\n", decimal);

//printf("Character : ");
    scanf(" %c", &letter);
    printf("character : %c", letter);





    return 0;
}
