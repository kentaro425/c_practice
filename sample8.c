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

// int keisan(int kingaku);
// int main(void)
// {
//   keisan(1000);
//   return 0;
// }

// int keisan(int kingaku)
// {
//   printf("%f", kingaku * 1.1);
//   return 0;
// }

int fruits(int apple, int orange);
int main(void)
{
  fruits(5, 6);
  return 0;
}

int fruits(int apple, int orange)
{
  printf("%d", (apple * 300) + (orange * 200));
  return 0;
}