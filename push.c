#include "monty.h"
/**
 * _push - push opcode
 * @stack: input Pointer
 * @line_number: Line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
int n, j = 0, flag = 0;

for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
flag = 1;

}

if (flag == 1)
{

fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE); 
}
else
{

fprintf(stderr, "L%d: usage: push integer\n", line_number);

fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE); 
}

n = atoi(bus.arg);
_addnode(stack, n);
}

