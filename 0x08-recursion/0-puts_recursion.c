#include "main.h"
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
