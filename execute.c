#include "main.h"

/**
 * execute - run the user input in the shell
 *
 * @args: array of the input's arguments
 */

int execute(char **args)
{
	pid_t pid;
	int status;
	char *path, *args[];

	path = {"/bin/ls"};
	args[] = {path, "-l", "/usr/", NULL};

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
		perror("Error:");
		exit(EXIT_FAILURE);
	}
}
