#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int xy)
{
	if (xy > 1)
		print_binary(xy >> 1);

	_putchar((xy & 1) + '0');
}

