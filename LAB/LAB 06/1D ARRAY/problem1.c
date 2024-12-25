
/*Write a programin C to read n number of value sin an array and display themin reverse order.*/

#include<stdio.h>
#define N 6
int main() {


int t ;
printf(" enter arrays elements:");
scanf("%d", &t);
int arr[t];
printf(" enter %d elements:\n", t);
for(int i =0  ; i<t ; i++) {


scanf("%d", &arr[i]);

}
printf("reverce order :");
    for (int  i = t-1  ; i>=0 ; i--) {
    printf("%d", arr[i]);
}


return 0;

}
