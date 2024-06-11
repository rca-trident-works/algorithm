#include <stdio.h>
#define N 6

int main(void) {
    int a[N] = {53, 65, 46, 38, 72, 24};
    int i, j, w, ii, ctl, ct2, m;

    ctl = 0;
    ct2 = 0;

    for (i = 0; i < N; i++) {
        printf("%4d", a[i]);
    }

    printf("\n\n");

    for (i = 0; i < N - 1; i++) {
        m = i;
        for (j = i + 1; j < N; j++) {
            ctl++;
            if (a[j] < a[m]) {
                m = j;
            }
        }
        if (m != i) {
            ct2++;
            w = a[i];
            a[i] = a[m];
            a[m] = w;
        }
        for (ii = 0; ii < N; ii++) {
            printf("%4d", a[ii]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < N; i++) {
        printf("%4d", a[i]);
    }

    printf("\n\n");

    printf("比較回数:%d 交換回数:%d\n", ctl, ct2);

    return 0;
}
