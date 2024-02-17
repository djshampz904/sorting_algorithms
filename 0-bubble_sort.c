#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    int temp, swap_num = 0;

    if (array == NULL || size < 2)
        return;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swap_num += 1;
                print_array(array, size);
            }
        }
        if (swap_num == 0)
            break;
        else
            swap_num = 0;
    }
}
