#include "main.h"

/**
 * execute - run the user input in the shell
 *
 * @args: array of the input's arguments
 */

void execute(char **args)
{
	pid_t pid;
	int status, exit_status;
	char *path;

	path = get_path(args[0]);

	if (_strcmp(args[0], "exit") == 0) /* Handle exit */
	{
		if (args[1] != NULL)
		{
			exit_status = parse_int(args[1]);
			exit(exit_status);
		}
		else
			exit(0);
	}
	pid = fork(); /* Forking a new process */
	if (pid == 0) /* Child process */
	{
		if (execve(path, args, NULL) == -1)
		{
			perror("Error:");
			exit(0);
		}
	}
	else if (pid > 0) /* Parent process */
	{
		if (waitpid(pid, &status, 0) == -1)
		{
			perror("Error:");
			exit(EXIT_FAILURE);
		}

	}
	else /* Process error*/
	{
		exit(EXIT_FAILURE);
	}
	if (_strcmp(path, args[0]) != 0)
		free(path);
}
