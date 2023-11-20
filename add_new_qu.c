#include "monty.h"
/**
 * _addqueue - add queue
 * @stack: input pointer
 * @data: data
*/
void _addqueue(stack_t **stack, int data)
{
stack_t *new_node, *temp;
temp = *stack;
new_node = malloc(sizeof(stack_t));
if (!new_node)

{
fprintf(stderr, "Error\n");
exit(0);

}
new_node->n = data;
new_node->next = NULL;
if (temp)
{
while (temp->next)
temp = temp->next;
}
if (!temp)
{
*stack = new_node;
new_node->prev = NULL;
}
else
{
temp->next = new_node;
new_node->prev = temp;
}
}
