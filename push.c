#include "monty.h"
/**
 * _push - push opcode
 * @stack: input Pointer
 * @line_number: Line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
int n, j = 0, flag = 0;
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
flag =  CheckStringNumber(bus.arg[j]);

}
if (bus.arg)
{
if (flag == 1)
{

fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);

}
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

