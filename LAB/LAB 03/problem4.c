#include<stdio.h>

int main() {
int number, sum = 0;

printf("Enter a number (0 to stop): ");
scanf("%d",N &number);
while (number != 0) {
sum += number;

printf("Enter a number (0 to stop): ");
scanf("%d", &number);
}

printf("The total sum is: %d\n", sum);

return 0;
}
