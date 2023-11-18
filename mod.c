#include "monty.h"
/**
 * _mod - mod elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _mod(stack_t **stack, unsigned int line_number)
{
int mod_res = 0;
stack_t *node;
if (*stack == NULL || (*stack)->next == NULL || (*stack)->n == 0)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
mod_res = ((*stack)->next->n) % ((*stack)->n);
node = *stack;
node->next->n = mod_res;
*stack = node->next;
free(node);
}
