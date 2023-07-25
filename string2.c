#include "main.h"

/**
 * _strcat - concat two strings
 * @dest: destination char
 * @src: source char
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

/**
 * _strcpy - copy the string from a source to dest
 * @dest: destination
 * @src: source
 * Return: Always 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
