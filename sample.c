#include <stdio.h>

int main(void)
{
  printf("こんにちは\n");
  printf("ありがとう\n");
  printf("%d", 100);
  printf("円\n");
  printf("%d円\n", 100);
  printf("%d + %d = %d\n", 100, 200, 100 + 200);
  printf("合計は%d円です\n", 300);
  printf("%d + %d = %d\n", 100, 200, 100 + 200);
  printf("%d - %d = %d\n", 100, 200, 100 - 200);
  printf("%d * %d = %d\n", 100, 200, 100 * 200);
  printf("%d / %d = %d\n", 100, 200, 100 / 200);
  printf("%f", 3.14);

  return 0;
}