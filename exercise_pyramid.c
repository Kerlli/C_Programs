#include <stdio.h>

void putchar_repeat(int ch, int times)
{
    while(times--)
        putchar(ch);
}

void print_pyramid(int level)
{
    if (level < 1) {
        puts("Error: level must greater than 0.");
    }
    
    for (int i = 1; i <= level; i++) {
             putchar_repeat(' ', level - i);
             putchar_repeat('*', (2 * i) - 1);
             putchar('\n');
    }
}

int main(void)
{
    int level;

    printf("Input pyramid level count:");
    scanf("%d", &level);

    print_pyramid(level);

    return (0);
}
