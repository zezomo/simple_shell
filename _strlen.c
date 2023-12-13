#include "projectshell.h"

/**
 * _strlen -  returns the length of a string.
 * @s: char parameter
 * Return: value of coun
*/
size_t my_strlen(const char *str)
{
const char *s = str;

while (*s)
{
++s;
}
return s - str;
}
