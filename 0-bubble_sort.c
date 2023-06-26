#include "sort.h"

/**
 *bubble_sort - this function sorts an array from the smallest to largest
 *@array: array to be sorted
 *@size: amount of elements in the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int temp;
	bool swapped;

	if (size == NULL || size < 2)
		return;

	n = size;

	do {
		swapped = false;
		for (i = 1; i < n; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		n--;
	} while (swapped);
}

