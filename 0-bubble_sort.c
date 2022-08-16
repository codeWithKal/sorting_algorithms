#include "sort.h"
/**
 * bubble_sort - a method to sort a given array in bubble sort
 *
 * @array: a pointer to an array
 * @size: size of an array
 *
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				SWAPER(array, j, j + 1);
				print_array(array, size);
			}
		}
	}
}
