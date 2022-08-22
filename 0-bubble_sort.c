#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order 
 * using the Bubble sort algorithm
 * 
 * @array: the array we sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
    int tmp;
    int perm = 1;

    while(perm != 0)
    {
        perm = 0;
        for(i = 0;  i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                tmp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = tmp;
                print_array(array, size);
                perm = 1;
            }
        }
    }
}
