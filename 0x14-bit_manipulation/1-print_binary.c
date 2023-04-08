#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: number to print in binary
 * Return: void
 */
void print_binary(unsigned long int x)
{
	if (x > 1)
	{
		print_binary(x >> 1);
	}

	_putchar((x & 1) + '0');
}

