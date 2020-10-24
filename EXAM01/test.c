#include <unistd.h>

void print_bits(unsigned char c)
{
	int i;
	i = 1;
	i <<= 8;
	while(i >>= 1)
	{
		(c & i) ? write(1, "1", 1) : write(1, "0", 1);
	}
}

int main()
{
	print_bits(2);
}
