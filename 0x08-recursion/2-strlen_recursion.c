#include "main.h"

/**
 * _strlen_recursion - to find the length of a string
 * @s: the string to be calculated size
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
