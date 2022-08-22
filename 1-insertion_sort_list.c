#include "sort.h"

/**
 * swap - swap two nodes of a doubly linked list
 * @nodea: pointer to the first node
 * @nodeb: pointer to the second node
 */
void swap(listint_t *nodea, listint_t *nodeb)
{

	listint_t *tmp;

	tmp = nodea;
	


	return;
}
/**
 * insertion_sort_list -  sorts a doubly linked list of integers 
 * in ascending order using the Insertion sort algorithm
 * using the Bubble sort algorithm
 * @list: doubly linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *rev;
	
	if (list == NULL || (*list)->next == NULL)
		return;
	tmp = *list;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		if (tmp < tmp->prev)
		{
			rev = tmp;
			while(rev->prev != NULL && rev->prev > rev)
			{
				rev = rev->prev;
				swap(rev, rev->next);
			}
		}
	}
}
