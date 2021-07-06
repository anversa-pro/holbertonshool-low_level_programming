include "holberton.h"

/**
 * *_memcpy - copies memory area
 * *@dest: memory area to paste at
 * *@src: memory area to copy from
 * @n: number of bytes to copy
 * Return: a pointer to the copy me
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}