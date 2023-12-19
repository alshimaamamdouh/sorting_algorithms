#include "sort.h"

/**
 * bubble_sort - Sorts array using Bubble Sort.
 * @array: input array .
 * @size: input size.
 */
void bubble_sort(int *array, size_t size) {
size_t i, j;
int num;
int flag;

if (array == NULL || size < 2) 
return;  

for (i = 0; i < size - 1; i++) 
{
flag = 0;  
for (j = 0; j < size - i - 1; j++) 
{
if (array[j] > array[j + 1]) 
{
num = array[j];
array[j] = array[j + 1];
array[j + 1] = num;
flag = 1; 
print_array(array, size);  
}
}
if (flag == 0) 
break;

}
}

