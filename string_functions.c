#include "main.h"

/**
 * _strcpy - copy string by pointer
 * @dest: parameter of function
 * @src: paramter of function
 * Return:dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len += 1;
	}
	for (i = 0; i < len; i += 1)
	{
		dest[i] = src[i];
	}
	dest[len] = '\0';
	return (dest);
}

/**
 * *_strncpy - copy string with n number bytes
 * @dest: parametre destination
 * @src: parameter source
 * @n: parameter number
 * Return: value of new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] != '\0' && len < n)
	{
		dest[len] = src[len];
		len += 1;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len += 1;
	}

	return (dest);
}

/**
 * _strdup - newly allocated space in memory
 * @str: parameter string to copy
 * Return:return a pointer
 */
char *_strdup(char *str)
{
	int len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len += 1)
		;
	ptr = malloc(len + 1);
	if (ptr != NULL)
	{
		for (; len >= 0; len -= 1)
			ptr[len] = str[len];
	}
	return (ptr);
}

/**
 * _strlen - function give the length of a string
 * @str: parameter of string to count
 *
 * Return: return value of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len += 1;
		str++;
	}
	return (len);
}
