#include <stdio.h>

int main(void) {
    int result, hr, min, sec;

    printf("時間\t: ");
    scanf("%d", &hr);
    printf("分\t: ");
    scanf("%d", &min);
    printf("秒\t: ");
    scanf("%d", &sec);

    result = hr * 3600 + min * 60 + sec;
    printf("%d時間%d分%d秒は%d秒\n", hr, min, sec, result);

    return 0;
}
