#include "main.h"

/**
 *
 */

int main(void)
{
	char **args, *input = NULL;

	while (1)
	{
		read_input(&input);
		if (input == NULL || input[0] == '\0')
			break;
		args = parse_args();
		execute(args);
	}
	free(input);
	return (0);
}
