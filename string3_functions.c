#include "main.h"

/**
 *  _strcmp - compare to strings values
 * @str1: parameter of first string given
 * @str2: parameter of second string given
 *
 * Return: difference value ascii
 */
int _strcmp(char *str1, char *str2)
{
	int len = 0;

	while (str1[len] != '\0' && str2[len] != '\0')
	{
		if (str1[len] != str2[len])
		{
			return (str1[len] - str2[len]);
		}
		len += 1;
	}
	return (0);
}

/**
 * strtow - split string into array
 * @str: parameter of string to split
 * Return: return pointer to array
 */
char **strtow(char *str)
{
	int i, row = 0, words;
	char **ptr;

	if (str == NULL)
		return (NULL);
	words = wdcount(str);
	if (!words)
		return (NULL);
	ptr = malloc((words + 1) * sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	while (*str)
	{
		if (*str == ' ')
		{
			str += 1;
			continue;
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			;
		ptr[row] = malloc(i + 1);
		if (ptr[row] == NULL)
		{
			for (i = 0; i < row; i++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (i = 0; str[i] != ' ' && str[i] != '\0'; i++)
			ptr[row][i] = str[i];
		ptr[row][i] = '\0';
		row += 1;
		str += i;
	}
	ptr[row] = NULL;
	return (ptr);
}