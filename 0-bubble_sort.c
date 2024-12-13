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
	size_t i;
	size_t count;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (count = 0; count < size - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				temp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = temp;

			print_array(array, size);
			}
		}
	}
}
