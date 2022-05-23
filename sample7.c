#include <stdio.h>

int main(void)
{
  // int i;
  // for (i = 1; i < 10; i++)
  // {
  //   printf("%d\n", i);
  // }

  // int year = 1;
  // double money = 100000;
  // while (money < 100000000)
  // {
  //   year++;
  //   money = (money + 2000000) * 1.04;
  //   if (year / 3 == 0)
  //   {
  //     money = money + 1000000;
  //   }
  // }
  // printf("%d年目：%f円となり、資産が1億円を超えます", year, money);

  int i = 10;
  while (i < 5){
    printf("while文です\n");
  }
  do{
    printf("do while文です");
  }while(i <5);
    return 0;
}