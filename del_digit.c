#include <stdio.h>

void del_digit(char str[])
{
    int int_flag = 0;
    int len = 0;

    while(str[len]) {
        len++;
    }

    printf("length is :%d\n", len);

    while (str[int_flag++]) {
        if (str[int_flag] >= '0' && str[int_flag] <= '9') {
            for (int i = int_flag; i < len - 1; i++) {
                str[i] = str[i + 1];
            }
            str[len - 1] = '\0';
            len--;
            int_flag--; // correct int_flag
            printf("string is now: %s\n", str);
        }
    }
}

int main(void)
{
    char s[200];

    printf("Input a string: ");
    scanf("%s", s);

    del_digit(s);

    // printf("string is now: %s", s);

    return (0);
}
