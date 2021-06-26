#include "holberton.h"

/**
 * print_triangle - Prints a Triangle
 * @size: input parameter to print
 * Retunr: empty
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= (size - i); k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
