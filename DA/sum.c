#include <stdio.h>
int main(void){
    int start, finish, sum, i;
    i = 0;
    do {
        printf("Only numbers acceptable.\n");
        printf("Start from: ");
        scanf("%d", &start);
        printf("Finish at: ");
        scanf("%d", &finish);
        if (start > finish){
            printf("Number of starting point is larger than the number of ending point.\n");
        }
    } while (start > finish);

    while(start + i == finish) {
        i++;
        sum = start + i;
        printf("%d\n", sum);
    }
    printf("Sum: %d", sum);
}