#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, l, j, a;

	i = l = 0;
	while (s[i] != 0)
	{
		j = 0;
		a = 0;
		while (accept[j] != 0)
		{
			if (s[i] != accept[j])
			{
				j++;
			}
			else if (s[i] == accept[j])
			{
				a++;
				l++;
				j++;
			}
		}
		if (a == 0)
			return (l);
		i++;
	}
	return (l);
}
