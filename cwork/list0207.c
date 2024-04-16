// 二つの実数値の和・差・積・商を実数で表示

#include <stdio.h>

int main(void) {
    double x, y;
    puts("二つの実数を入力せよ。");
    printf("実数x: "); scanf("%lf", &x);
    printf("実数y: "); scanf("%lf", &y);

    printf("x + y = %f\n", x + y);
    printf("x - y = %f\n", x - y);
    printf("x * y = %f\n", x * y);
    printf("x / y = %f\n", x / y);

    return 0;
}
