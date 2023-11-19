#include "monty.h"
/**
 * CheckStringNumber - Checks if a string is a numeric value
 * @src: The char to check
 * Return: 1 if not numeric, 0 otherwise
 */
int CheckStringNumber(char src)
{
if (src == '\0')
return (1);

if (src < '0' || src > '9')
return (1);

return (0);
}
