#include "sort.h"
/**
 * swap_values - swap the values of two elements in an array
 * @array: array containing the two elements
 * @i: indice of the first element to swap
 * @j: indice of the second element to swap
 */
void swap_values(int *array, int i, int j)
{
	int tmp = array[i];

	array[i] = array[j];
	array[j] = tmp;
}
/**
 * partition - divides array into two partitions
 * @array: the array being divided
 * @size: size of the array
 * @low: the lowest indice
 * @high: the highest indice
 * Return: the index of the pivot
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot = array[high]; /* pivot */
	int i = low - 1; /* temp pivot index */
	int j; /* counter */

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_values(array, i, j);
			print_array(array, size);
		}
	}
	i++;
	swap_values(array, i, high);
	return (i);
}
/**
 * recursive_sort - do the recursive sort
 * @array: the array being sorted
 * @size: size of the array
 * @low: the lowest indice
 * @high: the highest indice
 */
void recursive_sort(int *array, size_t size, int low, int high)
{
	int p; /* pivot */

	/* Ensure indices are in correct order */
	if (low >= high)
		return;

	/* Partition array and get the pivot index */
	p = partition(array, size, low, high);

	/* Sort the two partitions */
	recursive_sort(array, size, low, p - 1); /* left side of pivot */
	recursive_sort(array, size, p + 1, high); /* right side of pivot */
}
/**
 * quick_sort -  sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * Lomuto partition scheme implemented
 * The pivot is always the last element of the partition being sorted
 * The array is printed after each swap
 * @array: the array being sorted
 * @size: the size of the array
 */
void quick_sort(int *array, size_t size)
{
	int low = 0;
	int high = size - 1;

	if (size < 2)
		return;
	recursive_sort(array, size, low, high);
}
