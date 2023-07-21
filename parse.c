#include "main.h"

/**
 * parse - Tokenizes the input string.
 * @inp: Input string.
 *
 * Return: String splitted.
 */
char **parse_args(char *str)
{
	size_t ssize;
	size_t i;
	char **tokens;
	char *token;

	ssize =  tokbBufSize;
	tokens = malloc(sizeof(char *) * (ssize));

	if (tokens == NULL)
	{
		perror(": allocation error\n");
		exit(EXIT_FAILURE);
	}

	token = _strtok(str, delim);
	tokens[0] = token;

	for (i = 1; token != NULL; i++)
	{
		if (i == ssize)
		{
			ssize += tokbBufSize;
			tokens = realloc(tokens, i, sizeof(char *) * bsize);
			if (tokens == NULL)
			{
				perror(": allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
		token = _strtok(NULL, tokbBufSize);
		tokens[i] = token;
		
	}

	return (tokens);
}
