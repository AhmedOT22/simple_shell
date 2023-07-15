#include "main.h"

/**
 * main - the shell loop
 */

int main(void)
{
	char **args, *input = NULL;

	while (1)
	{
		read_input(&input);
		if (input == NULL || input[0] == '\0')
			break;
		args = parse_args(); /* Tokenize the arguments */
		execute(args);
	}
	free(input);
	return (0);
}
