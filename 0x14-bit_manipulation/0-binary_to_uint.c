#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: a pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if invalid input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	for (; *b != '\0'; ++b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		num = (num << 1) | (*b - '0');
	}

	return (num);
}

