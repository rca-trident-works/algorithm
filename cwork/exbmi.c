#include <stdio.h>

int main(void) {
    int height, weight;
    double bmi;
    printf("身長(cm):");
    scanf("%d", &height);
    printf("体重(kg):");
    scanf("%d", &weight);
    bmi = weight / ((height / 100.0) * (height / 100.0));
    printf("BMI = %.1f\n", bmi);
    printf("あなたは%sです。\n",
           bmi < 18.5 ? "やせ型" :
           bmi < 25.0 ? "普通体重" :
           bmi < 30.0 ? "太り気味" : "肥満");
    return 0;
}
