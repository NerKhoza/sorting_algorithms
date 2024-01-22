#include "sort.h"

/**
 * swap - a function that swaps values
 * @a: parameter 1
 * @b: parameter 2
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: parameter 1
 * @size: parameter 2
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	for (i = 0; i < size - 1; i++)
	{
	for (j = 0; j < size - 1 - i; j++)
	{
	if (array[j] > array[j + 1])
	{
		swap(&array[j], &array[j + 1]);
		for (k = 0; k < size; k++)
		{
			printf("%d", array[k]);
			if (k < size - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
	}
	}
}

