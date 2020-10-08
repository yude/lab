#include <stdio.h>
int main(){
    int n, i;
    printf("何階堂? (Only numerical characters acceptable): ");
    scanf("%d", &n);

    printf("%d階堂", n);
    for(i=0; i<n; i++){
        printf("ふみ");
    }

    return 0;
}