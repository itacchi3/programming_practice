#include <stdio.h>
int main() {
    int x;
    int ans = 1;

    printf("階乗を求めたい数値を入力してください．>>> ");
    scanf("%d", &x);
    printf("%d! = ", x);
    while (x > 0) {
        ans = ans * x;
        x--;
    }
    printf("%d\n", ans);
}