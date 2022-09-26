#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	char *start;
	char *search;

	while (*haystack != '\0')
	{
		start = haystack;
		search = needle;
		while (*search == *haystack && *haystack != 0 && *search != 0)
		{
			haystack++;
			search++;
		}
		if (*search == 0)
			return (start);
		haystack = start + 1;
	}
	return (0);
}
