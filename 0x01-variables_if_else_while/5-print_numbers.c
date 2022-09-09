#include <stdio.h>

/**
 * main - Print all single digit numbers of base 10
 *
 * Return: Always (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '10'; num++)
	{
		printf("%num", num);
	}
	printf('\n');
	return (0);
}
