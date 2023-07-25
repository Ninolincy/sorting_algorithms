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
 * bubble_sort - sorts an array of integers in ascending order
 * @array: Array of integers to sort
 * @size: Size of array
 * Return: Void
*/
void bubble_sort(int *array, size_t size)
{
bool bubble = false;
size_t i, len = size;

if (array == NULL || size < 2)
return;

while (bubble == false)
{
bubble = true;
for (i = 0; i < size - 1; i++)
{
if (array[i] > array[i + 1])
{
swap(array + i, array + i + 1);
print_array(array, size);
bubble = false;
}
}
len--;
}
}
