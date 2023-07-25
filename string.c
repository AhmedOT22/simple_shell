#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: char to check
 * Return: Always 0 (success)
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}

/**
 * _strdup - duplicate a string
 * @str: string
 * Return: the new string
 */

char *_strdup(char *str)
{
	size_t length = _strlen(str) + 1;
	char *new_str = malloc(length);

	if (new_str == NULL)
		return (NULL);
	return (_strcpy(new_str, str));
}
