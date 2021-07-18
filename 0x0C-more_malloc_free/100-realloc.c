#include "holberton.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * *@ptr: pointer to the memory previously allocated
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: ptr if new == old, NULL specific cases
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *nptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(char *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	nptr = malloc(new_size * sizeof(char));
	if (nptr == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			nptr[i] = ptr[i];
		free(ptr);
		return (nptr);
	}
	for (i = 0; i < new_size; i++)
		nptr[i] = ptr[i];
	free(ptr);
	return (nptr);
}
