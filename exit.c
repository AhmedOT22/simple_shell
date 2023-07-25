#include "main.h"

/**
 * is_exit - handle the exit command of the shell
 *
 * @args: arguments list
 * @input: the user input
 */

void is_exit(char **args, char *input)
{
	int exit_status;

	if (_strcmp(args[0], "exit") == 0)
	{
		if (args[1] != NULL)
		{
			if (args[1][0] < '0' || !_isdigit(args[1][0]))
			{
				write(2, "./hsh: 1: exit: illegal number:", 31);
				write(2, args[1], _strlen(args[1]));
				write(2, "\n", 1);
				free_args(args);
				free(input);
				exit(2);
			}
			exit_status = parse_int(args[1]);
			free_args(args);
			free(input);
			exit(exit_status);
		}
		else
		{
			free_args(args);
			free(input);
			exit(0);
		}
		free_args(args);
		free(input);
	}
}
