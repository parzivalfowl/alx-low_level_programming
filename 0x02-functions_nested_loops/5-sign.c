#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: the parameter for the function
 * Return: 1 if is greater than 0, 0 if is zero, -1 if is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
