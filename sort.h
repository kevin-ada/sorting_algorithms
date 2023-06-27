#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;



/**
 *swap_node - Interchange nodes
 *@node: node
 *@list: node list
 *Return: returns a pointer to anode
 */
listint_t *swap_node(listint_t *node, listint_t **list)
{
	listint_t *back = node->prev, *current = node;

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}




/* Function we are supposed to work with */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


/** Prototypes of the mandatory tasks */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);





#endif
