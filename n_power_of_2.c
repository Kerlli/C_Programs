#include <stdio.h>

int power(n)
{
    int base = 2, r = 1;
    while(n--) {
        r = r * base;
    }
    return r;
}

int right_move_bits(unsigned num, int n)
{
    return num >> n;    
}

int left_move_bits(unsigned num, int n)
{
    return num << n;
}

int main(void)
{
    int num = 512, n = 5;
    printf("%d move right %d bits == %d / 2^%d ?\n", num, n, num, n);
    putchar(right_move_bits(num, n) == (num / power(n)) ? 'y' : 'n');
    puts("\n");
    printf("%d move left %d bits == %d * 2^%d ?\n", num, n, num, n);
    putchar(left_move_bits(num, n) == (num * power(n)) ? 'y' : 'n');
    return (0);
}
