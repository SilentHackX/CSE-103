
#include <stdio.h>


int main() {
    char string[50];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    ptr = string;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}





