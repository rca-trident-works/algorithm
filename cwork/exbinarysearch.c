#include <stdio.h>

int main() {
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N = sizeof(data) / sizeof(data[0]);
    int x = 5;  // 検索する値
    int left = 0;
    int right = N - 1;
    int flag = 0;
    int m = 0;

    while (left <= right && flag == 0) {
        m = (left + right) / 2;
        if (x == data[m]) {
            flag = 1;
        } else if (x < data[m]) {
            right = m - 1;
        } else {
            left = m + 1;
        }
    }

    if (flag == 1) {
        printf("xはm番目にあります\n");
    } else {
        printf("xはありません\n");
    }

    return 0;
}
