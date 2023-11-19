#include "monty.h"
/**
 * _push - push opcode
 * @stack: input Pointer
 * @line_number: Line number
 */
void _push(stack_t **stack, unsigned int line_number)
{
int num, i = 0, flag = 0;
char *token = strtok(info.arg, ";");
strcpy(info.arg, token);
if (info.arg)
{
if (info.arg[0] == '-')
i++;

while (info.arg[i])
{
flag =  CheckStringNumber(info.arg[i]);
i++;
}
if (flag == 1)
{

fprintf(stderr, "L%d: usage: push integer\n", line_number);
fclose(info.file);
free(info.content);
free_stack(*stack);
exit(EXIT_FAILURE);

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
num = atoi(info.arg);
_addnode(stack, num);
}
