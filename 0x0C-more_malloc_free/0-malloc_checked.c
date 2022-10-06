#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: Pointer to address of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ad;

	ad = malloc(b);
	if (ad == NULL)
		exit(98);
	return (ad);
}
