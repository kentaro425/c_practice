#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main(void)
// {
//   char c = 'A';
//   printf("%c", c);
//   return 0;
// }

// int main(void)
// {
//   char str[5] = {'J', 'O', 'H', 'N', '\0'};
//   printf("%s", str);
//   return 0;
// }

// int main(void)
// {
//   char str2[] = "JOHN";
//   printf("%s", str2);
//   return 0;
// }

// int main(void)
// {
//   char str[] = "2.56";
//   double suuti = atoi(str);
//   printf("%f", suuti);
//   return 0;
// }

// int main(void)
// {
//   char str[10];
//   strcpy(str, "MIKE");
//   printf("%s", str);
//   return 0;
// }

// int main(void)
// {
//   char str1[15] = "Star";
//   char str2[] = "Wars";
//   strcat(str1, str2);
//   printf("%s", str1);

//   return 0;
// }

int main(void)
{
  char str[20];
  char str1[] = "Star";
  char str2[] = "Wars";
  int i = 3;
  sprintf(str, "%s%s%d", str1, str2, i);
  printf("%s", str);
  return 0;
}