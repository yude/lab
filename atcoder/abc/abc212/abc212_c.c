#include <stdio.h>
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[20000];
    int b[20000];
    
    int result[40000];
    
    for (int i = 0; i < n; i++){
        scanf("%d ", &a[i]);
    }

    for (int i = 0; i < m; i++){
        scanf("%d ", &b[i]);
    }

    for (int i = 0; i < n * m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                result[i] = a[j] - b[k];
                if (result[i] < 0) {
                    result[i] = result[i] * (-1);
                }
            }
        }
    }
    int min = result[0];
    for (int i = 1; i < n * m - 1; i++) {
        if (result[i] < min) {
            min = result[i];
        }
    }
    
    printf("%d\n", min);
}