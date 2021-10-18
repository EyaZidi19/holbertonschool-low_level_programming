#include "main.h"

/**
 * _memset - fills the first n bytes of the memory
 * area pointed to by s with  the constant byte b
 *
 * @s: string to change
 * @b: constant byte
 * @n: number of b to change
 *
 * Return: Pointer to the memeora area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
