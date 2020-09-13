#include <stdio.h>

char *to_upper(char *s)
{
    char upper[128];
    char *ptr = upper;
    int step = (int) ('a') - (int) ('A');

    while(*ptr = *s) {
        if ((*s >= 'a') && (*s <= 'z')) {
            *ptr = (char)((int)*s - step);
        }
        *ptr++;
        *s++;
   }

    return (upper);
}

char *to_lower(char *s)
{
    char lower[128];
    char *ptr = lower;
    int step = (int) ('a') - (int) ('A');

    while(*ptr = *s) {
        if ((*s >= 'A') && (*s <= 'Z')) {
            *ptr = (char)((int)*s + step);
        }
        *ptr++;
        *s++;
    }

    return (lower);
}

int main(void)
{
    char *str = "w2DmCsu";
    printf("String is: %s\n", str);

    printf("Upper: %s\n", to_upper(str));
    printf("Lower: %s\n", to_lower(str));
    return (0);
}
