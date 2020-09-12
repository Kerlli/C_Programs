#include <stdio.h>

char *str_char(const char *str, int c)
{
    while (*str++) {
        if (*str == c)
            return (str);
    }

    return NULL;
}

int main(void)
    {
    char *s = "a3mcw9fu";
    char search = 'm';

    printf("string: %s\n", s);
    printf("the char to find: %c\n", search);
    printf("Found %s\n", str_char(s, search));

    return (0);
}
