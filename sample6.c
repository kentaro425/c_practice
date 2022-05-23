#include <stdio.h>
int main(void)
{
  // int apple = 10;
  // if (apple - 10)
  //   printf("リンゴの数は0個ではありません");
  // int apple = 8;
  // if (apple != 10)
  //   printf("リンゴの数は10個ではありません");
  int suuti;
  scanf("%d", &suuti);
  if (suuti < 10)
    printf("10未満です");
  if (suuti > 10)
    printf("10より大きいです");
  if (suuti == 10)
    printf("10と同じです");
  return 0;
}