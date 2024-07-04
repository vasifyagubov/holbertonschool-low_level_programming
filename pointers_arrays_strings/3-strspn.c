#include "main.h"

/**
*_strspn - search the number of bytes in the initial
*segment of s which consist only of bytes from accept
*@s:reference bytes container
*@accept: reference bytes container
*
*Return: returns the number of bytes in the initial
*segment of s which consist only of bytes from accept
*/


unsigned int _strspn(char *s, char *accept)
{
	unsigned i, j;

	for (i = 0 ; s[i] ; i++)
	{
		for(j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}

	return (i);
}

