#include <stdio.h>
#define MAX 21

int piso_log2(int n) {
  if (n == 1)
    return 0;

    return piso_log2(n / 2) + 1;
}

int main() {
  int x;
  scanf("%d", &x);
  printf("%d ", piso_log2(x));
  return 0;
}
