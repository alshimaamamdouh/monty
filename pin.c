#include "monty.h"
/**
 * _pin - print top of stack
 * @stack: input pointer
 * @line_number: line number
 *
 */

void _pin(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n);
}
