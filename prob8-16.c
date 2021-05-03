#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int array[9];
    int max;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 10; i++) {
        array[i] = rand() % 100 + 1;
    }

    max = array[0];  //最大値を配列の先頭要素で初期化
    //最大値のサーチ
    for (i = 0; i < MAX_ARRAY; i++) {
        if (max < array[i]) {  //配列i番目の数値がmaxよりも大きかったら
            max = array[i];  // maxに配列i番目の数値を格納
        }
    }
    printf("最大値：%d\n", max);
}