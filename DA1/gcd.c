#include <stdio.h>

int main(){
    int num_1, num_2; // 比較する 2 つの数
    int tmp, cal; // 処理時に使用する値
    int skip = 0; // 処理を飛ばすフラグ

    // 比較対象の数値を格納する
    printf("1 つ目の値を入力: ");
    scanf("%d", &num_1);
    printf("2 つ目の値を入力: ");
    scanf("%d", &num_2);

    // 入力された数値の大小を比較する
    if (num_1 < num_2){
        tmp = num_1;
        num_1 = num_2;
        num_2 = tmp;
    }

    cal = num_1 % num_2;

    while (cal != 0){
       num_1 = num_2;
       num_2 = cal;
       cal = num_1 % num_2;
    }

    printf("GCD is %d", num_2);
}