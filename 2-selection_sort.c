#include "sort.h"

/**
 * selection_sort - Sorts an array
 * @array: input array.
 * @size: input size.
 */

void selection_sort(int *array, size_t size)
{
size_t i, j;
int number, num, flag = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		number = i;
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[number] > array[j])
			{
				number = j;
				flag += 1;
			}
		}
		num = array[i];
		array[i] = array[number];
		array[number] = num;
		if (flag != 0)
			print_array(array, size);
	}

}
