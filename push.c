#include "monty.h"

/**
 * f_push - Add a node to the stack or queue
 * @head: Pointer to the head of the stack/queue
 * @counter: Line number
 *
 * Description:
 * This function adds a new node with the given integer value to the stack
 * or queue based on the value of the global variable bus.lifi.
 * If bus.lifi is 0, the node is added to the stack (LIFO)
 * If bus.lifi is not 0, the node is added to the queue (FIFO
 *
 * If bus.arg is not a valid integer or is not provided, print error.
 * to the standard error stream and the program exits with a failure status.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	/* Check if bus.arg is not provided */
	if (!bus.arg)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	/* Check if bus.arg starts with a minus sign */
	if (bus.arg[0] == '-')
		j++;
	/* Check if bus.arg contains non-digit characters */
	for (; bus.arg[j] != '\0'; j++)
	{
		if (bus.arg[j] > '9' || bus.arg[j] < '0')
		{
			flag = 1;
			break;
		}
	}
	/* Handle error when bus.arg is not a valid integer */
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	/* Add the node to the stack or queue based on bus.lifi */
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
