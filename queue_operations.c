#include "monty.h"

/**
 * f_queue - Sets the stack behavior to queue (FIFO)
 * @head: Head of the stack
 * @counter: Line number
 *
 * Description:
 * This function sets the stack behavior to queue (FIFO) by updating the
 * value of the global variable bus.lifi to 1.
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack
 * @head: Head of the stack
 * @n: New value
 *
 * Description:
 * This function adds a new node with the given integer value to the tail
 * of the stack. If the stack is empty, the new node becomes the head of
 * the stack. Otherwise, it is added to the end of the stack.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		/* Handle error condition appropriately */
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
