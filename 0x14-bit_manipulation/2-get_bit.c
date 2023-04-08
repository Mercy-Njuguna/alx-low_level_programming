#include "main.h"

/**
 *  get_bit - Returns the value of the bit at a given index.
 * @n: The unsigned long integer to extract the bit from.
 * @index: The index of the bit to extract.
 *
 * Return: The value of the bit at the specified index, or -1 if the index is invalid.
 *      Otherwise - The value of bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
