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
