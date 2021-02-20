#include <stdio.h>
#include <stdlib.h>

void main(){
    char n[100];
    printf("n の値を入力してください: ");
    scanf("%s", n);

    printf("n / 5 は %d です。\n", atoi(n) / 5);
    printf("n %% 5 は %d です。\n", atoi(n) % 5);
}