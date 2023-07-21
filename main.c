#include "main.h"

/**
 * main - the shell loop
 */

int main(void)
{
	char **args, *input = NULL;
	int i;

	while (1)
	{
		read_input(&input);
		if (input == NULL || input[0] == '\0')
			break;
		args = parse_args(input, " \t\n"); /* Tokenize the arguments */
		if (args == NULL)
		{
			free(input);
			break;
		}
		execute(args);
		for (i = 0; args[i]; i++)
			free(args[i]);
		free(args);
		free(input);
	}
	free(input);
	return (0);
}
