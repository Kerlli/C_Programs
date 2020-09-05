#include <stdio.h>

int str_char_index(const char str[], int c)
{
    int i = 0, count = 0;

    while (str[i]) {
        if (str[i] == c) {
            count++;
        }
        i++;
    }

    return (count);
}

int main(void)
{
    char s[200];
    char c[1];
    int ch;
    printf("Input string: ");
    scanf("%s", s);

    printf("Input char to search: ");
    scanf("%s", c);

    ch = c[0];

    printf("count: %d", str_char_index(s, ch));
    return (0);
}
