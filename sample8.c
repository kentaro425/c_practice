#include <stdio.h>
// int hello(void);
// int main(void)
// {
//   hello();
//   return 0;
// }

// int hello(void)
// {
//   printf("ありがとう");
//   return 0;
// }
int keisan(int kingaku);
int main(void)
{
  keisan(1000);
  return 0;
}

int keisan(int kingaku)
{
  printf("%f", kingaku * 1.1);
  return 0;
}