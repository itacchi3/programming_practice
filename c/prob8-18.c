#include <stdio.h>

int main() {
    int i, student_num;
    int door[50];
    int count = 0;

    for (i = 0; i < 50; i++) {
        door[i] = 1;
    }

    for (student_num = 1; student_num < 51; student_num++) {
        for (i = 0; i < 50; i++) {
            if ((i + 1) % student_num == 0) {
                door[i] *= -1;
            }
        }
    }

    for (i = 0; i < 50; i++) {
        if (door[i] == -1) {
            count += 1;
        }
    }
    for (i = 0; i < 50; ++i) {
        printf("%d\n", door[i]);
    }
    printf("開いているロッカーの数%d個\n", count);
}