#include <stdio.h>

/**
  * main - Prints the numbers since 0 to 9
  *
  * Return: Always (Success)
  */

int main(void)
{
	int num;

	for (num = '0'; num < 10; num++)
	{
		putchar(num + '0');
	}

	putchra('\n');

	return (0);
}
