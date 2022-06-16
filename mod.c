#include "monty.h"

/**
* mod - computes the rest of the division of the second top element of
* the stack by the top element of the stack
* @stack: The address of the stack
* @line_number: The line number of the command being run
*/
void mod(stack_t **stack, unsigned int line_number)
{
stack_t *temp = *stack;
int modulus = 0;

if (temp == NULL || temp->next == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
if (temp->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", line_number);
exit(EXIT_FAILURE);
}
modulus = (temp->next->n) % (temp->n);
pop(stack, line_number);
(*stack)->n = modulus;
}
