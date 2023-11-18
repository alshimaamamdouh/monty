#include "monty.h"
/**
 * _mul - mul elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _mul(stack_t **stack, unsigned int line_number)
{
int mul_res = 0;
stack_t *node;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
mul_res = ((*stack)->next->n) * ((*stack)->n);
node = *stack;
node->next->n = mul_res;
*stack = node->next;
free(node);
}
