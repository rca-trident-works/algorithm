#include <stdio.h>

int main(void) {
    int input, hr, min, sec;

    printf("秒\t: ");
    scanf("%d", &input);

    hr = input / 3600;
    min = (input % 3600) / 60;
    sec = input % 60;

    printf("%d秒は%d時間%d分%d秒\n", input, hr, min, sec);

    return 0;
}

