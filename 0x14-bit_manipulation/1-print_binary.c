/**
 * print_binary - prints the binary representation of an unsigned long int
 *
 * @n: number to print in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;
		_putchar((n & mask) ? '1' : '0');
	}
}

