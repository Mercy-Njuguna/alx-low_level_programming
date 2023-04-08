#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to extract the bit from
 * @index: the position of the bit to extract
 *
 * Return: the value of the bit at the specified index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1ul << index)) == 0)
		return (0);

	return (1);
}

