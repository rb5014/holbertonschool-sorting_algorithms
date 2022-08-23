#include <stddef.h>
#include "sort.h"
void selection_sort(int *array, size_t size)
{
	int i, min, j, tmp;

	for (i = 0; i < (size - 1); i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
			if (min != i)
			{
				tmp = array[i];
				array[i] = min;
				array[min] = tmp;
			}
		}
	}
}
