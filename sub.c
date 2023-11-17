#include "monty.h"
/**
 * _sub - sub elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _sub(stack_t **stack, unsigned int line_number)
{
int add_res = 0;
stack_t *node;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
add_res = ((*stack)->next->n) - ((*stack)->n);
node = *stack;
node->next->n = add_res;
*stack = node->next;
free(node);
}
