#include "monty.h"
/**
 * func_exc- Executes the opcode
 * @opcode: The opcode
 *
 * @stack: input Pointer
 * @line_number: Line number
 *
 */
void func_exc(char *opcode, stack_t **stack, unsigned int line_number)
{
int i = 0;
char *str_delim;
char *delim = " \n\t";
instruction_t instructions[] = {
{"push", _push},
{"pall", _pall},
{"pint", _pin},
{"nop", _nop},
{"pop", _pop},
{"swap", _swap},
{"add", _add}
};
str_delim = strtok(opcode, delim);
while (instructions[i].opcode && str_delim)
{
if (strcmp(str_delim, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
break;
}
i++;
}
if (!(instructions[i].opcode && str_delim))
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, str_delim);
free(opcode);
free_stack(*stack);
exit(EXIT_FAILURE);
}
}


