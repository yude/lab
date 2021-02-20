#include <stdio.h>

int surplus(int n){
    while(n >= 10){
        n = n - 10;
    }
    return n;
}

int main(void){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("10 で除した剰余は %d です。\n", surplus(n));

    return;
}