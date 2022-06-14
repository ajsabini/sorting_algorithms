#include "sort.h"

/**
 * shell_sort - ordenar(asc) un array de int con shell sort
 * @array: el array a ordenar
 * @size: el largo del array
 * Return: void
 */

void shell_sort(int *array, size_t size)
{
	size_t valo, i, j = 0;
	int temp;

	if (array == NULL)
		return;

	for (valo = size / 2; valo > 0; valo /= 2)
	{
		for (i = valo; i < size; i += 1)
		{
			temp = array[i];
			for (j = i; j >= valo && array[j - valo] > temp; j -= valo)
			{
				array[j] = array[j - valo];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
