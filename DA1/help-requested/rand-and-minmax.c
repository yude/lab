#include <stdio.h>
#include <stdlib.h>

int get_digit(int n) // 引数の数値の桁数を返す関数
{
    int digit = 1;

    while (n /= 10) {
        ++digit;
    };

    return digit;
}

int main(){
    int array[10];
    int i;
    // 乱数を生成して表示
    for (i=0; i<9; i++){
        array[i] = rand() % 99 + 10;
        printf("%d ", array[i]);
    }
    // 最大値と最小値を求めて、そのインデックスを取る
    int min_i = 0;
    int max_i = 0;
    // 最小値を求める
    for (i=0; i<9; i++){
        if (array[i] < array[min_i]){
            min_i = i;
        }
    }
    // 最大値を求める
    for (i=0; i<9; i++){
        if (array[i] > array[max_i]){
            max_i = i;
        }
    }
    printf("\n");
    
    // 表示
    for (i=0; i<9; i++){
        if (i == min_i || i == max_i){ // インデックスが最小値のもの、または最大値のものだったら
            printf("%d ", array[i]);
        }else{ // 最小値でも最大値でもなかったら、本来表示される数値の桁数分空白を入れる
            for(int j=0; j<get_digit(array[i]) + 1; j++){
                printf(" ");
            }
        }
    }
    
    printf("\n\n----------------------------\n");
}