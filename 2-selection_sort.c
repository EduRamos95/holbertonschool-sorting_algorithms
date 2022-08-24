#include "sort.h"

/**
 * swap - swap two elements in array
 * @array: element of array to swap
 * @array2: element of array to swap
 */
void swap(int *array, int *array2)
{
	int tmp;

	tmp = *array;
	*array = *array2;
	*array2 = tmp;
}

/**
 * selection_sort - Sort an array of integers in ascending order
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = k = i; j < size ; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		swap(&array[i], &array[k]);
		print_array(array, size);
	}
}
