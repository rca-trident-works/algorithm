#include <stdio.h>
#define N 6

int main(void) {
    int a[N] = {38, 72, 53, 46, 24, 65};
    int i, j, w, ii, ctl, ct2;

    ctl = 0;
    ct2 = 0;

    for (i = 0; i < N; i++) {
        printf("%4d", a[i]);
    }

    printf("\n\n");

    for (i = 1; i < N; i++) {
        w = a[i];
        j = i;
        while (j > 0 && a[j - 1] > w) {
            ctl++;
            a[j] = a[j - 1];
            j--;
        }
        ctl++;
        a[j] = w;
        ct2++;

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
