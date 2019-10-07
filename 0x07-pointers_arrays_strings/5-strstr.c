#include "holberton.h"

/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack && *haystack != *needle)
	{
		haystack++;
		if (*haystack == *needle)
			return (haystack);
	}
	if (*needle == '\0')
		return (haystack);
	return (0);
}
