#include "main.h"
/**
 * more_numbers - Print 10 times numbers 0-14
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;
	/*char *num = "1234567891011121314"; */

	for (i = 0 ; i < 11 ; i++)
	{
		for (j = 0 ; j < 15 ; j++)
		{
			if (j >= 10)
			{
			_putchar (j / 10 + '0');
			}
			_putchar (j % 10 + '0');
		}
	_putchar ('\n');
	}
}
