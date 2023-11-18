#include "monty.h"
/**
 * func_exc- Executes the opcode
 * @opcode: The opcode
 *
 * @stack: input Pointer
 * @line_number: Line number
 *
 * Return: 0
 */
void func_exc(char *opcode, stack_t **stack, unsigned int line_number)
{
int i = 0;
char *str_delim;
char *delim = " $\t\n";
instruction_t instructions[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pin},
{"nop", _nop},
{"pop", _pop},
{"swap", _swap},
{"add", _add},
{"sub", _sub},
{"div", _div}
};
str_delim = strtok(opcode, delim);
bus.arg = strtok(NULL, " $\n\t");
if (str_delim && str_delim[0] == '#')
return;

while (instructions[i].opcode && str_delim)
{
if (strcmp(str_delim, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
return;
}

i++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, str_delim);
free(opcode);
free_stack(*stack);
exit(EXIT_FAILURE);
}


