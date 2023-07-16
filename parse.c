#include "shell.h"

/**
 * parse - splits a string into words. Repeat delimiters are ignored
 * @str: the input string
 * @x: the delimeter string
 * Return: a  pointer to an arrayof strings, or NULL on failure
 */

char **parse(char *str, char *x)
{
	int index = 0, start = 0, numW = 0, len = _strlen(str), i, j, l;
	char **s = NULL;

	if (str == NULL || str[0] == 0)
		return (NULL);
	if (!x)
		x = " ";

	for (i = 0; str[i] != '\0'; i++)
		if (!_delim(str[i], x) && (_delim(str[i + 1], x) || str[i + 1]))
			numW++;

	if (numW == 0)
		return (NULL);

	s = malloc((numW + 1) * sizeof(char *));
	if (!s)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (_delim(str[i], d) || str[i] == '\0')
		{
			if (i - startIndex > 0)
			{
				l = i - startI;
				s[index] = malloc((l + 1) * sizeof(char));
				if (!s[index])
				{
					for (j = 0; j < index; j++)
						free(s[j]);
					free(s);
					return (NULL);
				}
				memcpy(s[index], &str[start], l);
				s[index][l] = '\0';
			}
			startIndex = i + 1;
		}
	}
	s[index] = NULL;
	return (s);
}

/**
 * _delim - checks if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */

int _delim(char c, char *delim)
{
	while (*delim)
	{
		if (*delim++ == c)
		{
			return (1);
		}
	}
	return (0);
}
