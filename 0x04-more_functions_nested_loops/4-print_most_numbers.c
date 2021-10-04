#include "main.h"
/**
 * print_most_numbers - prints numbers leaving 2 and 4
 * Description: prints 0-9 expect numbers 2 and 4
*/
void print_most_numbers(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
		n++;
	}
	_putchar('\n');
}
