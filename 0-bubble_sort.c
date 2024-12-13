#include "sort.h"
#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order by using..
 * ..the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: Number of integers in the array
 * Return: none (void)
 */

void bubble_sort(int *array, size_t size)
{
	size_t outer;
	size_t inner;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (outer = 0; outer < size - 1; outer++)
	{
		for (inner = 0; inner < size - 1; inner++)
		{
			if (array[inner] > array[inner + 1])
			{
				temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;

			print_array(array, size);
			}
		}
	}
}
