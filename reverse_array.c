#include <stdio.h>

void intary_rcpy (int v1[], const int v2[], int counts)
{
    int i = 0;
    while (counts--) {
        v1[i] = v2[counts];
        i++;
    }
}

int main(void)
{
    int v1[5];
    int v2[] = {1, 2, 3, 4, 5};

    intary_rcpy(v1, v2, 5);

    for (int i = 0; i < 5; i++) {
        printf("v1[%d]: %d\n", i, v1[i]);
    }

    return (0);
}
