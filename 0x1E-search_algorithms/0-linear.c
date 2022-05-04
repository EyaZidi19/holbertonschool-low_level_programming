#include "search_algos.h"

/**
 * linear_search - func that searches for a value
 * @array: the array to search target
 * @size: the number of elements
 * @value: the value to search
 * Return: the first index where value is located or -1 if value is not present
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
