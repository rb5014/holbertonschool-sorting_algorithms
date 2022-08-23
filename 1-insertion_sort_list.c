#include "sort.h"

/**
 * swap - swap two nodes of a doubly linked list
 * @head: head of the list, changed to 2nd node if 1st node is swapped
 * @a: pointer to the first node
 * @b: pointer to the second node
 */
void swap(listint_t **head, listint_t *a, listint_t *b)
{
	a->next = b->next;
	b->prev = a->prev;
	if (b->next)
		b->next->prev = a;
	if (a->prev)
		a->prev->next = b;
	else
		*head = b;
	a->prev = b;
	b->next = a;
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
	listint_t *head;

	if (list == NULL)
		return;
	head = *list;
	tmp = (*list)->next;
	while (tmp != NULL)
	{
		if (tmp->n < tmp->prev->n)
		{
			rev = tmp;
			while (rev->prev != NULL && rev->prev->n > rev->n)
			{
				if (rev->prev == head)
					head = rev;
				swap(list, rev->prev, rev);
				print_list(*list);
			}
		}
		tmp = tmp->next;
	}
	*list = head;
}
