/* int型配列を使用したスタック */
/* exstack.c */

#include <stdio.h>
#define N 10

void push(int x);
int pop();

int stack[N];
int sp = 0;

int main(void) {
  int op, i, data;

  while (1) {
    printf("input push: 0 pop: 1 : ");
    scanf("%d", &op);

    if (op < 0)
      break;
    else if (op == 0) {
      data = pop();
      printf("pop: %d\n", data);
    } else {
      printf("input data: ");
      scanf("%d", &data);
      push(data);
    }

    printf("sp: %d\n", sp);
    for (i = 0; i < sp; i++) {
      printf("%4d ", stack[i]);
    }
    printf("\n\n");
  }
  return 0;
}

void push(int x) {
  if (sp < N)
    stack[sp++] = x;
  else
    printf("スタックは満杯です\n");
}

int pop() {
  int lt;
  if (sp > 0)
    lt = stack[--sp];
  else {
    printf("スタックは空です\n");
    lt = 0;
  }
  return lt;
}
