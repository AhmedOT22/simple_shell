#include "main.h"

/**
 * get_env - returns the value of an environment variable
 *
 * @var: environment variable
 *
 * Return: pointer to the value, or NULL if fail
 */

char *get_env(char *var)
{
	char **env = environ;
	size_t length = _strlen(var);
	int i = 0;

	while (environ[i] != NULL)
	{
		if (_strncmp(var, env[i], length) == 0 && env[i][length] == '=')
			return (&env[i][length + 1]);
		i++;
	}

	return (NULL);
}
