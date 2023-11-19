#include "monty.h"
/**
 * _push - push opcode
 * @stack: input Pointer
 * @line_number: Line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
int num;
if (info.arg)
{
if(CheckStringNumber(info.arg))
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(info.file);
free(info.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
else
{
num = atoi(info.arg);
_addnode(stack, num);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(info.file);
free(info.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
}
