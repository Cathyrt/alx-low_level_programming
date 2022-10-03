#include "main.h"

/**
 * word_count - Count number of words separated by spaces in a string
 * @str: String to check
 * Return: Number of words;
 */
int word_count(char *str)
{
	int count;
	int i;

	i = count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}
/**
 * find_words_len - Find length of all the words in a string
 * @str: String to check length of words in
 * @words: Number of words
 *
 * Return: Combined length of words
 */
int *find_words_len(char *str, int words)
{
	int i, word, len;
	int *sizes;

	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = word = 0;
	while (word < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			len++;
			sizes[word] = len;
			word++;
		}
		i++;
	}
	return (sizes);
}
/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Return pointer to an array of strings, NULL if it fails
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));
		
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
