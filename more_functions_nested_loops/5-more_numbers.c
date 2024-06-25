#include "main.h"

void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = 0 ; j <= 14; j++)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

