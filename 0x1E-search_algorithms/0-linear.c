#include "search_algos.h"

/**
 * linear_search-searches for a value
 * @array:input array
 * @size:size of array
 * @value:value
 * Return:Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int)size; j++)
	{
		printf("Value checked array[%u] = [%d]\n", j, array[j]);
		if (value == array[j])
			return (j);
	}
	return (-1);
}
