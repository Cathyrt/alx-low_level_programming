#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabetic
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
