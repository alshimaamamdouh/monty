#include "monty.h"
/**
 * is_line_blank - Check if a line contains only whitespace
 * @line: The input line
 * Return: 1 if the line is blank, 0 otherwise
 */
int is_line_blank(const char *line)
{
while (*line != '\0')
{
if (!isspace((unsigned char)*line))
return (0);

line++;
}
return (1);
}

/**
 * trim_spaces - Trim leading and trailing spaces from a string
 * @str: The input string
 */
void trim_spaces(char *str)
{
char *end;

while (isspace((unsigned char)*str))
str++;

end = str + strlen(str) - 1;
while (end > str && isspace((unsigned char)*end))
end--;

*(end + 1) = '\0';
}
