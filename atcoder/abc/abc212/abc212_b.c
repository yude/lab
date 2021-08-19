#include <stdio.h>
int main() {
    int a[4];
    int number;
    int result = 0;
    
    if (scanf("%d", &number) == 1);
    a[3] = (number % 10); number /= 10;
    a[2] = (number % 10); number /= 10;
    a[1] = (number % 10); number /= 10;
    a[0] = (number % 10); number /= 10;
    if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3]) {
        result = 1;
    }
    for (int i = 1; i <= 2; i++) {
        if (a[i] >= 0 && a[i] <= 8) {
            if (a[i+1] == a[i] + 1) {
                result = 1;
            }
        }
        if (a[i] == 9) {
            if (a[i+1] == 0) {
                result = 1;
            }
        }
    }
    if (result == 1) {
        printf("Weak\n");
    } else {
        printf("Strong\n");
    }
}