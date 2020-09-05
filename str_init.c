#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";
    printf("%s\n", str);
    str[0] = '\0';
    printf("%s\n", str);
    return (0);
}
