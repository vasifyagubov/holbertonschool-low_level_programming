#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *array_range - make  memory for an array
*@min: int type
*@max: int type
*
*Return: return pointer to array
*/

int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);

}
