#include "sort.h"

/**
 * lomuto_partition - Implements the Lomuto partition scheme for Quick Sort.
 * @array: The array to be partitioned.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 * Return: The final position of the pivot element.
 */

size_t lomuto_partition(int *array, size_t low, size_t high, size_t size)

{
int pivot = array[high], temp;
size_t i = low - 1, j;
for (j = low; j < high; j++)

{
if (array[j] <= pivot)

{
i++;
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
}
temp = array[i + 1];
array[i + 1] = array[high];
array[high] = temp;
print_array(array, size);

return (i + 1);

}

/**
 * quick_sort_recursive - Recursive function for Quick Sort.
 * @array: The array to be sorted.
 * @low: The starting index of the partition.
 * @high: The ending index of the partition.
 * @size: The size of the array.
 */

void quick_sort_recursive(int *array, size_t low, size_t high, size_t size)

{
if (low < high)

{
size_t pivot = lomuto_partition(array, low, high, size);
if (pivot > 0)

{

quick_sort_recursive(array, low, pivot - 1, size);
}
quick_sort_recursive(array, pivot + 1, high, size);
}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)

{
if (array == NULL || size < 2)

{
return;
}
quick_sort_recursive(array, 0, size - 1, size);
}
