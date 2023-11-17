#include "monty.h"
/**
 * _addnode - add node
 * @stack: input pointer
 * @data: data
*/
void _addnode(stack_t **stack, int data)
{
stack_t *new_node, *temp;
temp = *stack;
new_node = malloc(sizeof(stack_t));
if (!new_node)

{
printf("Error\n");
exit(0);

}
if (temp)
temp->prev = new_node;
new_node->n = data;
new_node->next = *stack;
new_node->prev = NULL;
*stack = new_node;
}
