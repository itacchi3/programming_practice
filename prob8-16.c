#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, j, max_index;
    int array[9];
    int max, max_temp;

    srand((unsigned int)time(NULL));

    for (i = 0; i < 10; i++) {
        array[i] = rand() % 100 + 1;
    }

    printf("ソート前\n");
    for (i = 0; i < 10; ++i) {
        printf("%d\n", array[i]);
    }

    for (i = 0; i < 10; i++) {
        //最大値を先頭要素で初期化
        max = array[i];
        max_index = i;
        //最大値のサーチ
        for (j = i; j < 10; j++) {
            if (max < array[j]) {  //配列i番目の数値がmaxよりも大きかったら
                max = array[j];  // maxに配列i番目の数値を格納
                max_index = j;
            }
        }
        //配列の最初の数と入れ替える
        array[max_index] = array[i];
        array[i] = max;
    }
    printf("ソート後\n");
    for (i = 0; i < 10; ++i) {
        printf("%d\n", array[i]);
    }
}