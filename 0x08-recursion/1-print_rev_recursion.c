#include "main.h"

/**
 * _print_rev_recursion - to print a string in reverse format
 * @s: the string to be printed
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
