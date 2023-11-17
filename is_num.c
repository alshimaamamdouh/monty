#include "monty.h"
/**
 * CheckStringNumber - Checks if a string is a numeric value
 * @src: The string to check
 * Return: 1 if numeric, 0 otherwise
 */
int CheckStringNumber(char src)
{
if (src == '\0')
return (0);

if (src < '0' || src > '9')
return (0);

return (1);
}