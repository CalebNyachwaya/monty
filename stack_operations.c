#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description:
 * This function swaps the values of the top two elements of the stack.
 * If the stack has less than two elements, an error message is printed,
 * and the program exits with a failure status.
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}

/**
 * f_nop - Does nothing
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description:
 * This function does nothing and serves as a placeholder.
 * It is used when encountering the "nop" opcode.
 */
void f_nop(stack_t **head, unsigned int counter)
{
	(void)counter;
	(void)head;
}

/**
 * f_mod - Computes the rest of the division of the second top element
 *         of the stack by the top element of the stack
 * @head: Pointer to the head of the stack
 * @counter: Line number
 *
 * Description:
 * This function computes the modulo operation between the second top element
 * and the top element of the stack, and stores the result in the second top
 * element.
 * If the stack has less than two elements or the top element is zero,
 * an error message is printed, and the program exits with a failure status.
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
