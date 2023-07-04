#include <stdio.h>

/**
 * _putchr - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (writes(1, &c, 1));
}
