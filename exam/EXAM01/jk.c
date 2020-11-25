#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i = 1;
    i = i << 8;
    while (i >>= 1)
        (octet & i) ? write(1, "1", 1) : write(1, "0", 1);
}
int main(void)
{
    print_bits(2);
    return (0);
}