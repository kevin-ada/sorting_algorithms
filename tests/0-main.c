#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *main- Entry point
 *
 *Return - 0
 */

int main()
{
	int array[] = {30,50,60,20,1,3,4,56,7,8};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);

	return (0);
}
