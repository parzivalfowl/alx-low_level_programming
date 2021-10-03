#include "main.h"
#include "holberton.h"

/**
 * main - check for the code for ALX students
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * print_alphabet - Printing the alphabet in lowercase
 *
 * Return 0
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
