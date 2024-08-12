#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * swap_ints -it swaps two integer
 * @a: first integer
 * @b: second one
 *
 * Return: voide
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/**
 * selection_sort - it sort an array of algoritms
 * @array: array of integers
 * @size: size of array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t n, i;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (n = 0; n < size - 1; n++)
	{
	min = array + n;
	for (i = n + 1; i < size; i++)
		min = (array[i] < *min) ? (array + i) : min;

	if ((array + n) != min)
		{
		swap_ints(array + n, min);
		print_array(array, size);
		}
	}
}
