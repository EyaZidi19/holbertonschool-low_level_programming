#include "main.h"

/**
 * binary_to_uint - converts a binary number to a unsigned int
 * @b: is a pointer to a string of 0 or 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, power;

	if (!b) /* checks if b is NULL*/
		return (0);


	while (*b) /* finds the last value of b */
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}
	b--;

	sum = 0;
	power = 1;
	while (*b) /* while b is not NULL*/
	{
		if (*b == '0') /* if b points to a value of 0 */
			sum += 0;
		else if (*b == '1') /* if b points to a value of 1*/
			sum += (1 * power);
		/* printf("%d is power value : %s is b value\n", power, b); */
		power *= 2; /* binary is base 2 */
		/* printf("%d is power value : %s is b value\n", power, b); */
		b--; /*Reads the numbers in from right to left*/
	}
	return (sum);
}
