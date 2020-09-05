#include <stdio.h>
#define ERROR -1
#define STACK_DEPTH 0

int combination (int n, int r)
{
    if (n < 1) return (ERROR);
    if (n < r) return (ERROR);
    if (n == r) return (1);
    if (r == 0) return (1);
    if (r == 1) return (n);
    STACK_DEPTH++;
    return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
    int n, r;
    printf("Input N:");
    scanf("%d", &n);

    printf("Input R:");
    scanf("%d", &r);

    int result = combination(n, r);
    printf((result) == ERROR ? "Your input is not valid.\n" : "C(N, R) = %d", result);
    printf("STACK DEPTH: %d", STACK_DEPTH);
    return (0);
}
