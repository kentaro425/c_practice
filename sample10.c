#include <stdio.h>
// int main(void)
// {
//   int array[10];
//   array[5] = 15;
//   printf("%d\n", array[5]);
//   printf("%d\n", array[4]);
//   // printf("%d\n", array[20]);
//   return 0;
// }

// int main(void)
// {
//   int array[5] = {12, 13, 14};
//   printf("%d\n", array[0]);
//   printf("%d\n", array[1]);
//   printf("%d\n", array[2]);
//   printf("%d\n", array[3]);
//   printf("%d\n", array[4]);
//   return 0;
// }

// int main(void)
// {
//   int array[] = {12, 13, 14};
//   printf("%d\n", array[0]);
//   printf("%d\n", array[1]);
//   printf("%d\n", array[2]);
//   return 0;
// }

int main(void)
{
  int array[5] = {12, 13, 14};
  int i;
  for (i = 0; i < 5; i++)
  {
    printf("%d番目は%dです\n", i, array[i]);
  }
  return 0;
}