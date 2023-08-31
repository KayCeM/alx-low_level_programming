#include"main.h"
/*
 * strlen_recursion - Returns the lenght of string
 * Returns: The legnh of the string
 */
int_strlen_recursion(char *s)
{
	in longit = 0;

	if(*s)
	{
		longit++;
		longit +=_strlen_recursions(s + 1);
	}
	return (longit);
}
