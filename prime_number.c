#include <stdio.h>

#define MAX_NUMBER 1000

int main(void)
{
    int i, num;
    int index = 0;
    int prime[500];

    prime[index++] = 2;
    prime[index++] = 3;

    for (num = 5; num <= MAX_NUMBER; num += 2) {
        for (i = 1; i < index; i++) {
            if (num % prime[i] == 0)
                break;
        }
        if (index == i)
            prime[index++] = num;
    }

    for (i = 0; i < index; i++)
        printf("%d\n", prime[i]);

    return (0);
}
