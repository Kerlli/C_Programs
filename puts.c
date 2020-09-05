#include <stdio.h>

int main(void)
{
  int num1, num2;

  puts("Input two numbers.");
  printf("Number A:");
  scanf("%d", &num1);
  printf("Number B:");
  scanf("%d", &num2);
  printf("A + B = %d", num1 + num2);

  return (0);
}
