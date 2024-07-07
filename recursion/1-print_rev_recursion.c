#include "main.h"

/**
*_strlen_recursion - gives length of a string
*@s: string to be measured
*Return: length of the string
*
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
