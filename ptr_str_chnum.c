#include <stdio.h>

int str_chnum(const char *str, char c)
{
    int count = 0;

    while (*str++) {
        if (*str == c)
            count++;
    }

    return (count);
}

int main(void)
{
    char *s = "iTsG0nnaBeOk";
    char ch = 'n';

    printf("String is: %s\n", s);
    printf("Search target: %c\n", ch);

    printf("Found %d count of target char\n", str_chnum(s, ch));
    return (0);
}
