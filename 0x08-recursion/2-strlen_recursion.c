#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}
