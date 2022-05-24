#include <stdio.h>
int main(void)
{
  int array[10];
  array[5] = 15;
  printf("%d\n", array[5]);
  printf("%d\n", array[4]);
  // printf("%d\n", array[20]);
  return 0;
}