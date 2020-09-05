#include <stdio.h>

int main(void)
{
  int num;

  printf("Input a integer:");
  scanf("%d", &num);

  printf("The last digit of the number is: %d\n", num % 10);

  return (0);
}
