#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit10a = '0';
	int digit1a = '0';
	int digit10b = '0';
	int digit1b = '0';

	while (digit10a <= '9')
	{
		while (digit1a <= '9')
		{
			digit1b++;
			while (digit10b <= '9')
			{
				while (digit1b <= '9')
				{
					putchar (digit10a);
					putchar (digit1a);
					putchar (' ');
					putchar (digit10b);
					putchar (digit1b);
					if (digit1a != '8')
					{
						putchar (',');
						putchar (' ');
					}
					digit1b++;
				}
				digit10b++;
				digit1b = '0';
			}
			digit1a++;
			digit1b = digit1a;
			digit10b = digit10a;
		}
		digit10a++;
		digit1a = digit10a;
		digit10b = digit10a;
	}
	putchar ('\n');
	return (0);
}