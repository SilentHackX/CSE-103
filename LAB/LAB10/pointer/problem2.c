
#include <stdio.h>
#include <math.h>
#include <string.h>


int main() {
    int number;
    int *ptr;

    printf("Enter a number: ");
    scanf("%d", &number);
    ptr = &number;
    (*ptr)++; 

    printf("Incremented value = %d\n", number);

    return 0;
}





