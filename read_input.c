#include "main.h"

/**
 * read_input - read the input of the user
 *
 * @input: the input buffer
 */

void read_input(char **input)
{
	size_t input_size = 0;
	ssize_t read_size = getline(input, &input_size, stdin);

	if (read_size == -1) /* EOF */
	{
		free(*input);
		exit(EXIT_SUCCESS);
	}

	/* Remove trailing newline */
	else
	{
		if ((*input)[read_size - 1] == '\n')
			(*input)[read_size - 1] = '\0';
	}
}
