#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order by using..
 * ..the selection sort algorithm
 * @array: Array to be sorted
 * @size: Number of integers in the array
 * Return: none (void)
 */
void selection_sort(int *array, size_t size)
{
	size_t outer;
	size_t inner;
	size_t smallest;
	int temp;

	for (outer = 0; outer < size; outer++)
	{
		smallest = outer;
		for (inner = outer + 1; inner < size; inner++)
		{
			if (array[inner] < array[smallest])
				smallest = inner;
		}
		if (smallest != outer)
		{
			temp = array[outer];
			array[outer] = array[smallest];
			array[smallest] = temp;
			print_array(array, size);
		}
	}
}
