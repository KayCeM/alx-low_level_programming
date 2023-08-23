#include "main.h"
/**
 * function that fills memory with a constant byte
 * Return:  a pointer to the memory area n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
