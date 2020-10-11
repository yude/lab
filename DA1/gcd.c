#include <stdio.h>
int main(){
    int num_1, num_2; // 比較する 2 つの数
    int cal_1, cal_2; // 処理時に実際に処理する値
    int skip = 0; // 処理を飛ばすフラグ

    // 比較対象の数値を格納する
    printf("1 つ目の値を入力: ");
    scanf("%d", &num_1);
    printf("2 つ目の値を入力: ");
    scanf("%d", &num_2);

    // 入力された数値の大小を比較する
    if (num_1 == num_2){
        skip = 1;
        cal_2 = num_1;
    }
    if (num_1 < num_2){
        cal_1 = num_2;
        cal_2 = num_1;
    }
    if (num_1 < num_2){
        cal_1 = num_1;
        cal_2 = num_2;
    }

    for(;;){
        if (cal_2 == 0){
            break;
        }else{
            cal_1 = cal_1 % cal_2;
        }
    }

    printf("GCD is %d", cal_2);
}