#include "main.h"

/**
 * free_args - frees the memory allocated to an array of arguments
 *
 * @args: the array of arguments
 */

void free_args(char **args)
{
	int i;

	if (args == NULL)
		return;
	for (i = 0; args[i] != NULL; i++)
		free(args[i]);
	free(args);
}
