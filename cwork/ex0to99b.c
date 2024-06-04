// 0~99を2次元配列に格納し，表示する

#include <stdio.h>

int main(void) {
    int i, j;
    int num[10][10];
    for (i = 0; i < 100; i++) {
        num[i / 10][i % 10] = i;
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%2d ", num[i][j]);
        }
        printf("\n");
    }
    return 0;
    }

