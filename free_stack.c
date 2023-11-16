#include "monty.h"

/**
 * free_stack - Frees a stack
 * @stack: Pointer to the top of the stack
 */
void free_stack(stack_t *stack)
{
stack_t *final = stack;
stack_t *temp;
while (final != NULL)
{
temp = final->next;
free(final);
final = temp;
}
}
