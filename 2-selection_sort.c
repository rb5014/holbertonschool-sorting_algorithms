#include <stddef.h>
#include "sort.h"
/**
* selection_sort - function of sort selection
* @array: array of number
* @size: size max
* Return: Nothing but print_array
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	unsigned long int min;

	if (size < 2 || array == NULL)
	{
		return;
	}

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (i != min)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
