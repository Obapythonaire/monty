#include "monty.h"

/**
* nop - Opcode that does nothing
* @stack: The address of the stack
* @line_number: The line number of opcode currently being executed
*/

void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
