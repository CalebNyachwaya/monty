#include "monty.h"

/**
 * free_stack - Frees a doubly linked list
 * @head: Head of the stack
 *
 * Description:
 * This function frees the memory allocated for a doubly linked list.
 * It starts from the head of the list and iteratively frees each node.
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
