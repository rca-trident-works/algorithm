#include <stdio.h>
#define N 6

int main(void) {
    int a[N] = {72, 24, 46, 38, 53, 65};
    int i, j, w, ii, ctl, ct2;

    ctl = 0; // comparison count
    ct2 = 0; // swap count

    for (i = 0; i < N; i++) {
        printf("%4d", a[i]);
    }

    printf("\n\n");

    for (i = N - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            ctl++;
            if (a[j] > a[j + 1]) {
                ct2++;
                w = a[j];
                a[j] = a[j + 1];
                a[j + 1] = w;
            }
            for (ii = 0; ii < N; ii++) {
                printf("%4d", a[ii]);
            }
            printf("\n");
        }
    }

    printf("\n");

    for (i = 0; i < N; i++) {
        printf("%4d", a[i]);
    }

    printf("\n\n");

    printf("比較回数:%d 交換回数:%d\n", ctl, ct2);

    return 0;
}
