#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 *
 * @list: The list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
    listint_t *current, *next, *prev;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = *list;
    while (current)
    {

    }
}