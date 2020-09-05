#include <stdio.h>

int main(void)
{
  float num1, num2;

  puts("Input two numbers:");

  printf("number A:");
  scanf("%f", &num1);

  printf("number B:");
  scanf("%f", &num2);

  printf("A is %.2f%% of B", (num1 / num2) * 100);

  /**
  if datatype of num1 and num2 is "int", like:
  
  int num1, num2;

  then, we expect the output is a "float" number:

  printf("Result is: %lf", (double) (num1 / num2) * 100);
  **/

  return (0);
}
