/*Write a function that takes an integer N as parameter. And print Hello World N times using
recursion. Remember that you cannot use any loop in this program.*/


#include<stdio.h>

void callme(N)
{

    if(N == 0) return;
    printf("Hello World\n");
    callme(N-1);

}

int main()
{
    int n;
    printf("Number of times print : ");
    scanf("%d", &n);
    callme(n);

    return 0;
}
