#include <stdio.h>
int main(void){
    char str[100];
    int i;
    int result;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] == 1){
            result++;
        }
    }
    printf("%d", result);
}