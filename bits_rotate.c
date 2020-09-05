#include <stdio.h>

int bits_count(unsigned x)
{
    int count = 0;
    do {
        x >>= 1;
        count++;
    } while (x);
    return (count);
}

unsigned power(base, n) {
    unsigned r = 1;
    while(n--) {
        r *= base;
    }
    return (r);
}

void print_bits(unsigned x)
{
    int bits_sum = bits_count(x);
    while (bits_sum--) {
        putchar((x >> bits_sum) & 1U ? '1' : '0');
    }
}

unsigned set(unsigned x, int pos)
{
    int bits_sum = bits_count(x);

    if (pos >= bits_sum) return (x);

    return ((x >> (bits_sum - 1 - pos)) & 1U) == 1 ? (x) : (x + power(2, bits_sum - 1 - pos)); 
}

unsigned reset(unsigned x, int pos)
{
    int bits_sum = bits_count(x);

    if (pos >= bits_sum) return (x);

    return ((x >> (bits_sum - 1 - pos)) & 1U) == 0 ? (x) : (x - power(2, bits_sum - 1 - pos));
}

unsigned inverse(unsigned x, int pos)
{
    int bits_sum = bits_count(x);

    if (pos >= bits_sum) return (x);

    return ((x >> (bits_sum - 1 - pos)) & 1U) == 0 ? (x + power(2, bits_sum - 1 - pos)) : (x - power(2, bits_sum - 1 - pos));
}

unsigned rrotate(unsigned x, int n)
{
    int max_moves = bits_count(~0U);
    unsigned result; 
    if (n < 0) result = x;
    if (n == 0) result = x;
    if (n > 0 && n >= max_moves) result = 0;
    if (n > 0 && n < max_moves) result = (x >> n);

    return (result);
}

unsigned lrotate(unsigned x, int n)
{
    int max_moves = bits_count(~0U);
    unsigned result;
    if (n < 0) result = x;
    if (n == 0) result = x;
    if (n > 0 && n >= max_moves) result = 0;
    if (n > 0 && n < max_moves) result = (x << n);

    return (result);
}

int main(void)
{
    unsigned num, lrotate_num, rrotate_num;
    int moves, index;
    int left_max_moves = bits_count(~0U) - 1;
    int right_max_moves;

    printf("输入一个无符号整数:");
    scanf("%u", &num);

    printf("%d 的二进制表示为: ", num);
    print_bits(num);
    puts("");

    /*
    printf("你最多可以向左移 %d 位\n", left_max_moves);
    right_max_moves = bits_count(num) - 1;
    printf("你最多可以向右移 %d 位\n", right_max_moves);
    printf("输入移位数:");
    scanf("%d", &moves);

    lrotate_num = lrotate(num, moves);
    rrotate_num = rrotate(num, moves);

    printf("%u 向左移 %d 位后为： %u\n", num, moves, lrotate_num);
    printf("%d 的二进制表示为: ", lrotate_num);
    print_bits(lrotate_num);
    puts("");

    printf("%u 向右移 %d 位后为： %u\n", num, moves, rrotate_num);
    printf("%d 的二进制表示为: ", rrotate_num);
    print_bits(rrotate_num);
    puts("");

    */
    printf("输入将指定位数设定为1的下标（从0开始）：");
    scanf("%d", &index);


    printf("将第 %d 位设为1后的值为 %u\n", index, set(num, index));

    printf("将第 %d 位设为0后的值为 %u\n", index, reset(num, index));

    printf("将第 %d 位反转后的值为 %u\n", index, inverse(num, index));
    return (0);

}

