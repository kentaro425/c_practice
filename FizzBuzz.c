#include <stdio.h>
int fizz_buzz(int number);
int main(void)
{
  printf("数字を入力してください\n");
  int no;
  scanf("%d", &no);
  fizz_buzz(no);
  return 0;
}

int fizz_buzz(int number)
{
  if (number % 15 == 0)
  {
    printf("結果はFizzBuzz");
  }
  else if (number % 3 == 0)
  {
    printf("結果はFizz");
  }
  else if (number % 5 == 0)
  {
    printf("結果はBuzz");
  }
  else
  {
    printf("%d", number);
  }
}