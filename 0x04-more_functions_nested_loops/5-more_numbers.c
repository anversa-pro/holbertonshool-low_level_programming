#include "holberton.h"

/**
 * more_numbers - Printsten times the numbers from 0 to 14
 * Return: empty
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 15; i++)
	{
		if (i > 9)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
