#include "main.h"

/**
 * parse - Tokenizes the input string.
 * @inp: Input string.
 *
 * Return: String splitted.
 */
char **parse_args(char *input, *delim)
{
	size_t capacity = MAX_ARGS_NUM;
	char **tokens = malloc(capacity * sizeof(char *));
	char *token;
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
