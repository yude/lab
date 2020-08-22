#include <stdio.h>
#include <windows.h>
#define C 523
#define D 587
#define E 659
#define F 698
#define G 784
#define A 880
#define B 988
#define C2 1047

void flog(){
    Beep( C, 500 );
    Beep( D, 500 );
    Beep( E, 500 );
    Beep( F, 500 );
    Beep( E, 500 );
    Beep( D, 500 );
    Beep( C, 600 );
    Beep( E, 500 );
    Beep( F, 500 );
    Beep( G, 500 );
    Beep( A, 500 );
    Beep( G, 500 );
    Beep( F, 500 );
    Beep( E, 600 );
    Beep( C, 1000 );
    Beep( C, 1000 );
    Beep( C, 1000 );
    Beep( C, 1000 );
    Beep( C, 250 );
    Beep( C, 250 );
    Beep( D, 250 );
    Beep( D, 250 );
    Beep( E, 250 );
    Beep( E, 250 );
    Beep( F, 250 );
    Beep( F, 250 );
    Beep( E, 500 );
    Beep( D, 500 );
    Beep( C, 600 );
}

void main(){
    char which;
    /*printf("If you have any issues with displaying, try running chcp 65001.\n");
    printf("(▰╹◡╹▰) 何を再生しますか？\n");
    printf("\n");
    printf("a. かえるのうた\n");
    
    printf("選択肢を入力: ");
    scanf("%c", &which);
    */
    switch (which){
        case 'a':
            flog();
            break;
    }
    flog();
    printf("再生を終えました。");
}