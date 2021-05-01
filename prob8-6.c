#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcd(int x, int y);  // 最大公約数を求める関数

int main()
{
	int num1, num2, num_ans, den1, den2, den_ans, fra_gcd;
    int remainder;

	srand((unsigned int)time(NULL));

    num1 = rand() % 10 + 1;
    num2 = rand() % 10 + 1;
    den1 = rand() % 9 + 2;
    den2 = rand() % 9 + 2;

    //分数の足し算
    den_ans = den1 * den2;
    num_ans = num1 * den2 + num2 * den1;

    //通分
    fra_gcd = gcd(num_ans, den_ans);
    num_ans = num_ans / fra_gcd;
    den_ans = den_ans / fra_gcd;

    printf("%d/%d + %d/%d = ", num1, den1, num2, den2);

    if(num_ans%den_ans == 0){
        printf("%d\n", num_ans/den_ans);
    } else if(num_ans>den_ans){
        printf("%d.%d/%d\n", num_ans/den_ans, num_ans%den_ans, den_ans);
    } else {
        printf("%d/%d\n", num_ans, den_ans);
    }
}

int gcd(int x, int y)
{
    int r;

    // ユーグリッドの互除法
    while((r = x % y) != 0)
    {
        x = y;
        y = r;
    }
    return y;
}