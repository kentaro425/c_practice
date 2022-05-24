#include <stdio.h>

// int main(void)
// {
//   int apple = 10;
//   int *hoge;
//   hoge = &apple;
//   printf("%d\n", apple);
//   printf("%d\n", *hoge);
//   return 0;
// }

// int main(void)
// {
//   int apple, *hoge;
//   hoge = &apple;
//   printf("%p\n", &apple);
//   printf("%p\n", hoge);
//   return 0;
// }

// int main(void)
// {
//   int *apple, orange;
//   apple = &orange;
//   printf("%p\n", apple);
//   printf("%p\n", &orange);
//   return 0;
// }

int main(void)
{
  int *p, i;
  p = &i;
  *p = 15;
  printf("%d\n", *p);
  printf("%d\n", i);
  return 0;
}