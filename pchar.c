#include "monty.h"
/**
 * _pchar -  prints the char at the top of the stack
 * @stack: input pointer
 * @line_number: line number
 *
*/
void _pchar(stack_t **stack, unsigned int line_number)
{
if(*stack == NULL)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
else
{
if ((*stack)->n >= 0 && (*stack)->n <= 127) 
{	 
fprintf(stdout,"%c\n", (*stack)->n);
} 
else 
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
}
}
