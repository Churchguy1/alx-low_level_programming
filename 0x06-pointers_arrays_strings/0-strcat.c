#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @sec: input value
 * Return: void
 */

char *_strcat(char *dest, char *sec)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (sec[j] != '\0')
	{
		dest[i] = sec[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
