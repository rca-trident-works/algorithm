// 整数を1つキー入力し, その値が素数かどうかを判定
#include <stdio.h>

int main(void) {
    int n, i;
    printf("整数を入力してください: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("%dは素数ではありません\n", n);
            return 0;
        }
    }
    printf("%dは素数です\n", n);
    return 0;
}

