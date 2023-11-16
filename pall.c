#include "monty.h"

/**
 * _pall - pall opcode
 * @stack: input Pointer
 * @line_number: Line number
 *
 */
void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp = *stack;
(void) line_number;
while (temp != NULL)
{
fprintf(stdout, "%d\n", temp->n);
temp = temp->next;
}
}
