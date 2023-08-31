#include "main.h"

/*
 * main - entry point 
 * print reverse recusion
 * Return : 0 always (success)
 */
void _print_rev_recursion (char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
			_putchar(*s);
	}
}
