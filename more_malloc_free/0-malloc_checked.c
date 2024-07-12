#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* *malloc_checked - allocate memory with malloc
*@b:unsigned int type
*Return: return pointer
*
*/

void *malloc_checked(unsigned int b)
{
	int *abc;

	abc = malloc(b);
	if (abc = NULL)
		exit (98);
	

	return (abc);
}
