#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if invalid input
 */

unsigned int int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int w;

	if (b == NULL)
		return (0);

	for (w = 0; b[w] != '\0'; i++)
	{
		if (b[w] != '0' && b[w] != '1')
			return (0);

		result <<= 1;
		if (b[w] == '1')
			result += 1;
	}

	return (result);
}


