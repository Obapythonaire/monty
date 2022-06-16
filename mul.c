#include "monty.h"

/**
* mul - Multiplies the top two elements of the stack
* @stack: The adress of the stack
* @line_number: The line number of the command being run
*/
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int product = 0;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	product = (temp->n) * (temp->next->n);
	pop(stack, line_number);
	(*stack)->n = product;
}
