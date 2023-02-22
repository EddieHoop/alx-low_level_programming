#include "main.h"

/**
 * print_sign - function prints the sign of a number
 *
 * @n: paramenter as integer
 *
 * Return: 1 and print + if greater than zer.o
 * 0 and print 0 if zero.
 * -1 and print - if less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		return (-1);
	}
}
