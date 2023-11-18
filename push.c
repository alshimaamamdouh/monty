#include "monty.h"
/**
 * _push - push opcode
 * @stack: input Pointer
 * @line_number: Line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
int num, i = 0, flag = 0;
while (bus.arg[i])
{
flag =  CheckStringNumber(bus.arg[i]);
i++;
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
num = atoi(bus.arg);
_addnode(stack, num);
}

