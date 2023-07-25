#include "main.h"

/**
 * parse_args - Tokenizes the input string
 *
 * @input: the user input
 * @delim: the delimeter of strtok
 *
 * Return: the token, or NULL if fail
 */

char **parse_args(char *input, char *delim)
{
	char **tokens = (char **)malloc(MAX_ARGS_NUM * sizeof(char *));
	char *token, *new_token;
	int i = 0, j;

	if (tokens == NULL)
	{
		perror(": allocation error\n");
		/*exit(EXIT_FAILURE);*/
		return (NULL);
	}
	token = strtok(input, delim);
	while (token != NULL)
	{
		new_token = _strdup(token);
		if (new_token == NULL)
		{
			perror(": allocation error\n");
			for (j = 0; j < i; j++)
				free(tokens[j]);
			free(tokens);
			/*exit(EXIT_FAILURE);*/
			return (NULL);
		}
		tokens[i] = new_token;
		token = strtok(NULL, delim);
		i++;
		if (i >= MAX_ARGS_SIZE - 1)
		{
			perror(": allocation error\n");
			/*exit(EXIT_FAILURE);*/
			break;
		}
		if (_strlen(new_token) >= MAX_ARGS_SIZE)
		{
			perror(": allocation error\n");
			free(new_token);
			/*exit(EXIT_FAILURE);*/
			break;
		}
	}
	tokens[i] = NULL;
	free(tokens[i]);
	return (tokens);
}
