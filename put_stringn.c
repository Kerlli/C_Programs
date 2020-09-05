#include <stdio.h>

void put_stringn(const char str[], int num)
{
    while(num--) {
        unsigned i = 0;
        while(str[i])
            putchar(str[i++]);
    }
}

int main(void)
{
    char str[200];
    int repeat;

    printf("Input string: ");
    scanf("%s", str);

    printf("Input repeat circles: ");
    scanf("%d", &repeat);

    put_stringn(str, repeat);

    return (0);
}
