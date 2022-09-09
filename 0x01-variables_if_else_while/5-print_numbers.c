#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10 starting from 0.
 *
 * Description: using the main function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i < 9; i++)
	{
		printf("%i", i);
	}
	printf("\n");
	return (0);
}
