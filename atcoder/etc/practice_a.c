#include <stdio.h>

void main(){
    int a, b, c;
    char s[100];
    scanf("%d", &a);
    scanf("%d %d", &b, &c);
    scanf("%s", s);
    printf("%d %s", a+b+c, s);
}