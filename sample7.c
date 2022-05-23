#include <stdio.h>

int main(void)
{
  // int i;
  // for (i = 1; i < 10; i++)
  // {
  //   printf("%d\n", i);
  // }

  int year = 1;
  double money = 1000000;
  while (money < 100000000)
  {
    year++;
    money = (money + 600000) * 1.04;
  }
  printf("%d年目：%f円となり、資産が1億円を超えます", year, money);

  return 0;
}