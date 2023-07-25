#include "sort.h"

/**
 * swap - swapping integers
 * @a: first integer
 * @b: second integer
*/
void swap(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
 * selection_sort - Sorting by selection
 * @array: Array to sort
 * @size: size of the array
*/
void selection_sort(int *array, size_t size)
{
size_t i, j;
int *min;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = array + i;
for (j = i + 1; j < size; j++)
min = (array[j] < *min) ? (array + j) : min;

if ((array + i) != min)
{
swap(array + i, min);
print_array(array, size);
}
}
}
