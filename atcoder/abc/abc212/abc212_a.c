#include <stdio.h>

int main() {
    int a, b;
    if (scanf("%d %d\n", &a, &b) == 1);

    if (a > 0 && b == 0) {
        printf("Gold\n");
    }
    if (a == 0 && b > 0) {
        printf("Silver\n");
    }
    if (a > 0 && b > 0) {
        printf("Alloy\n");
    }
}