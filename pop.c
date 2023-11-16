#include "monty.h"

/**
 * _pop - pop opcode
 * @stack: input Pointer
 * @line_number: Line number
 *
 */
void _pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;

if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
tmp = *stack;
*stack = tmp->next;
free(tmp);
}
