#include "monty.h"
/**
 * _sub - sub elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _sub(stack_t **stack, unsigned int line_number)
{
int sub_res = 0, i, j;
stack_t *node;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
i = (*stack)->next->n;
j = (*stack)->n;
if (i > j)
sub_res = i - j;

else
sub_res = j - i;

node = *stack;
node->next->n = sub_res;
*stack = node->next;
free(node);
}
