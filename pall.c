#include "monty.h"

/**
 * f_pall - Prints the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number (unused)
 *
 * Description:
 * This function prints all the elements in the stack.
 * The stack remains unchanged after printing.
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;

	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
