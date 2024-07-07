#include "main.h"

/**
*factorial - search for the factorial of a number
*@n: the number to find the factorial of
*
*Return: the factorial of the number
*/

int factorial(int n)
{
	int a;

	if (n == 0)
		return (1);

	else if (n < 0)
		return (-1);

	a = factorial(n - 1);
	return (n * a);
}
