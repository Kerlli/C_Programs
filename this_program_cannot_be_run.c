#include <stdio.h>

// #define putsa(str) { putchar('\a'); puts(str); }
#define putsa(str) (putchar('\a'), puts(str))

int main(void)
{
    int na;

    printf("Input a number:");
    scanf("%d", &na);

    if (na)
        putsa("This Number is NOT zero.");
    else
        putsa("This Number is zero.");

    return (0);
}
