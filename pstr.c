#include "monty.h"
/**
 * _pstr -  prints the string starting at the top of the stack
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _pstr(stack_t **stack, unsigned int line_number)
{
stack_t *temp ;
(void)  line_number;
if (*stack == NULL)
{
fprintf(stdout, "0");
}
else
{
temp = *stack;
while (temp)
{
if (temp->n > 0 && temp->n < 127)
{
fprintf(stdout, "%c", temp->n);
temp = temp->next;
}
else
break;

}
printf("\n");
}
}
