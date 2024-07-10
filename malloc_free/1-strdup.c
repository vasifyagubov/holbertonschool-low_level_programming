#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - returns a pointer to a newly allocated space in memory
*@str: this is my input string
*
*Return: pointer of an array of chars
*/

char *_strdup(char *str)
{
	char *a;
	int i , len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
	{
		len ++;
	}

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	for (i = 0 ; i <= len ; i++)
	{
		a[i] = str[i];
	}
	return (a);
}

