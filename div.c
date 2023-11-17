#include "monty.h"
/**
 * _div - div elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _div(stack_t **stack, unsigned int line_number)
{
int div_res = 0;
stack_t *node;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
div_res = ((*stack)->next->n) / ((*stack)->n);
node = *stack;
node->next->n = div_res;
*stack = node->next;
free(node);
}
