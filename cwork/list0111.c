/* 読み込んだ整数値をそのまま表示 */

#include <stdio.h>

int main(void) {
    int no;

    printf("整数を入力してください：");
    scanf("%d", &no);
    printf("あなたは%dと入力しました", no);
    return 0;
}
