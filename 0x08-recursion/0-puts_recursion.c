#include "main.h"
#include <unistd.h>

/*main - Entry point
 * C - Recursion
 * Return : 0 Always (success)
 */

void _put_recursion(char *s)
{
	if(*s)
	{
		_putchar(*s);
			_puts_recursion(s);
			s++;
	}
	else _putchar('\n');
}
