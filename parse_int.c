#include "main.h"

/**
 * parse_int - concerts a string to an integer
 *
 * @s: string to convert
 *
 * Return: the converted integer value
 */

int parse_int(const char *s)
{
	int result = 0;
	int negative = 0;

	if (*s == '-')
	{
		negative = 1;
		s++;
	}

	while (*s != '\0')
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (negative ? -result : result);
}
