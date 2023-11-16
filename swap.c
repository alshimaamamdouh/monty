#include "monty.h"
/**
 * _swap - swap elements
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _swap(stack_t **stack, unsigned int line_number)
{
stack_t *first, *second;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
fprintf(stderr, "in\n");
first = *stack;
fprintf(stderr, "middle\n");
second = first->next;
first->next = second->next;
second->next = first;
*stack = second;
fprintf(stderr, "end");
}
