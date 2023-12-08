#include "projectshell"
/**
 * get_v - Function that get the value of the variable
 * @namev: variable name wanted to get
 * Return: return pointer of string
*/

char *get_v(char *namev)
{
	char **v;
	int len_of_variable;

	if (namev == NULL || namev[0] == '\0')
		return (NULL);
	len_of_variable = (int)strlen(namev);

	for (v = environ; *v != NULL; v++)
	{
		if (strncmp(*v, namev, len_of_variable) == 0)
		{
		       if((*v)[len_of_variable] == '=')
			return (*v+ len_of_variable + 1);
		}
	}
	return (NUll);
}
