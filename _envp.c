#include "projectshell.h"

/**
 * _env - Function ptints environment command env
 *
 * Return: function returns void.
 */

void P_env(void)
{
	int i, j;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != '\0'; j++)
			write(1, &environ[i][j], 1);
		write(1, "\n", 1);
	}
}
