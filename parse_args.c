#include "main.h"

/**
 * parse_args - Tokenizes the input string
 *
 * @input: the user input
 * @delim: the delimeter of strtok
 *
 * Return: the token, or NULL if fail
 */

char **parse_args(char *input, *delim)
{
	size_t capacity = MAX_ARGS_NUM;
	char *token, **tokens = malloc(capacity * sizeof(char *));
	int i = 0, j;

	if (tokens == NULL)
	{
		perror(": allocation error\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(input, delim);
	while (token != NULL)
	{
		if (i == capacity)
		{
			capacity += MAX_ARGS_NUM;
			char **new_tokens = realloc(tokens, capacity * sizeof(char *));

			if (new_tokens == NULL)
			{
				perror(": allocation error\n");
				for (j = 0; j < i; j++)
					free(tokens[j]);
				free(tokens);
				exit(EXIT_FAILURE);
			}
			tokens = new_tokens;
		}
		if (strlen(token) >= MAX_ARGS_SIZE)
		{
			perror(": allocation error\n");
			for (j = 0; j < i; j++)
				free(tokens[j]);
			free(tokens);
			exit(EXIT_FAILURE);
		}
		tokens[i] = strdup(token);
		if (tokens[i] == NULL)
		{
			perror(": allocation error\n");
			for (j = 0; j < i; j++)
				free(tokens[j]);
			free(tokens);
			exit(EXIT_FAILURE);
		}
		token = _strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;
	free(tokens[i]);
	return (tokens);
}
