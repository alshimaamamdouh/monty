#include "monty.h"
/**
 * _add - add elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _add(stack_t **stack, unsigned int line_number)
{
int add_res = 0, len;
stack_t *node, *temp;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
temp = *stack;
while (temp)
{
temp = temp->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
add_res = ((*stack)->next->n) + ((*stack)->n);
node = *stack;
node->next->n = add_res;
*stack = node->next;
free(node);
free(temp);
}
