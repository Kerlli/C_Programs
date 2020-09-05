#include <stdio.h>

int main(void)
{
  int num, digit;

  printf("Input an integer(greater than 0):");

  scanf("%d", &num);

  if(num < 0) {
    num = -num;
  }

  printf("revese sequence of %d is: ", num);
  do {
    digit = num % 10;
    num = num / 10;
    printf("%d", digit);
  } while(num > 0);

  return (0);
}
