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

// int fruits(int apple, int orange);
// int main(void)
// {
//   fruits(5, 6);
//   return 0;
// }

// int fruits(int apple, int orange)
// {
//   printf("%d", (apple * 300) + (orange * 200));
//   return 0;
// }

int fruits(int apple);
int main(void)
{
  int hoge;
  hoge = fruits(5);
  if (hoge < 3000)
  {
    printf("予算以内です");
  }
  else
  {
    printf("予算オーバーです");
  }
  printf("%d", hoge);
  return 0;
}

int fruits(int apple)
{
  int kingaku;
  kingaku = apple * 300;
  return kingaku;
}