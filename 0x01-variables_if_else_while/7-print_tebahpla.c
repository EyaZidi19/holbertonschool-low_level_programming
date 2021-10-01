/*
 * File: 7-print_tebahpla.c
 */

#include <stdio.h>

/**
 * main -  lowercase alphabet in reverse
 *
 * Return:  0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
