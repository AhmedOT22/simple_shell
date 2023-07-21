#include "main.h"

/**
 * get_path - return the path in binary
 *
 * @input: the user input
 *
 * Return: the binary path, or NULL if fail
 */

char *get_path(char *input)
{
	char *path = get_env("PATH");
	char *path_copy = _strdup(path);
	char *token = NULL;

	struct stat st;
	char bin_path[MAX_INPUT_SIZE];

	token = strtok(path_copy, ":");

	while (token != NULL)
	{
		_strcpy(bin_path, token);
		_strcat(bin_path, "/");
		_strcat(bin_path, input);

		if (stat(bin_path, &st) == 0)
		{
			free(path_copy);
			return (_strdup(bin_path));
		}
		token = strtok(NULL, ":");
	}
	free(path_copy);
	if (stat(input, &st) == 0)
		return (input);

	return (NULL);

}
