#include <stdio.h>
int main(void)
{
  // int apple = 10;
  // if (apple - 10)
  //   printf("リンゴの数は0個ではありません");
  // int apple = 8;
  // if (apple != 10)
  //   printf("リンゴの数は10個ではありません");

  // int suuti;
  // scanf("%d", &suuti);
  // if (suuti < 10)
  //   printf("10未満です");
  // if (suuti > 10)
  //   printf("10より大きいです");
  // if (suuti == 10)
  //   printf("10と同じです");

  // int suuti;
  // scanf("%d", &suuti);
  // if (suuti >= 5 && suuti <= 10)
  //   printf("5〜10の間です");
  // if (suuti < 5 || suuti > 10)
  //   printf("5〜10の間ではありません");

  // int suuti;
  // scanf("%d", &suuti);
  // if (suuti == 10)
  //   printf("10と同じです\n");
  // if (suuti == 10)
  //   printf("正しく入力できました\n");

  // if (suuti == 10)
  // {
  //   printf("10と同じです\n");
  //   printf("正しく入力できました\n");
  // }

  // if (suuti == 10)
  //   printf("10です");
  // else
  //   printf("10ではない");

  int age;
  scanf("%d", &age);
  if (age <= 3)
    printf("0円です");
  else if (age <= 20)
    printf("1000円です");
  else
    printf("2000円です");
  return 0;
}