#include<stdio.h>

/**
  * main - Prints a hexadecimal string
  *
  * Return: Always (Success)
  */

int main(void)
{
	char n;

	for (n = '0' ; n <= '16' ; n++)
	{
		putchar(n);
	}

	for (n = 'a' ; n <= 'f' ; n++)
	{
		putchar(n);
	}


	putchar('\n');

	return (0);
}
