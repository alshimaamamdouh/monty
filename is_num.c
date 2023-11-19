#include "monty.h"
/**
 * CheckStringNumber - Checks if a string is a numeric value
 * @src: The string to check
 * Return: 1 if numeric, 0 otherwise
 */
int CheckStringNumber(char *src)
{
int i = 0;
if (src == NULL || *src == '\0')
return (0);

if (src[0] == '-')
i++;
for (i = 0; src[i] != '\0'; i++)
{
if (src[i] < '0' || src[i] > '9')
return (1);
}
return (0);
}
