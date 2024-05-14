// 2つの整数を入力し，その最大公約数を求め表示する
#include <stdio.h>

int main(void) {
    int a = 0, b = 0;
    printf("x: ");
    scanf("%d", &a);
    printf("y: ");
    scanf("%d", &b);
    int x = a, y = b, u = 1, v = 0;
    while (y != 0) {
        int q = x / y;
        int r = x % y;
        int m = u - q * v;
        x = y;
        y = r;
        u = v;
        v = m;
    }
    printf("最大公約数は%d\n", x);
    return 0;
}
