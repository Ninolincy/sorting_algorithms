#include "sort.h"

/**
 * swapNodes - swaps the nodes
 * @list: List to swap
 * @node1: the pointer to the first node to swap
 * @node2: Second node to swap
*/
void swapNodes(listint_t **list, listint_t **node1, listint_t *node2)
{
(*node1)->next = (node2)->next;
if (node2->next != NULL)
node2->next->prev = *node1;
node2->prev = (*node1)->prev;
node2->next = *node1;
if ((*node1)->prev != NULL)
(*node1)->prev->next = node2;
else
*list = node2;
(*node1)->prev = node2;
*node1 = node2->prev;
}

/**
 * insertion_sort_list - sort list by insertion
 * @list: Pointer to  list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *i, *insert, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (i = (*list)->next; i != NULL; i = temp)
{
temp = i->next;
insert = i->prev;
while (insert != NULL && i->n < insert->n)
{
swapNodes(list, &insert, i);
print_list((const listint_t *)*list);
}
}
}
