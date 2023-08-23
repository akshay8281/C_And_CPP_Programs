#include<stdio.h>

int main() {
  int n;
  printf("Enter an integer: \n\n");
  scanf("%d", &n);

  for (int i = 1; i <= 10; ++i) {
    printf("\n%d * %d = %d \n", n, i, n * i);
  }
  return 0;
}
