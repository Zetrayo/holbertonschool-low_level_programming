#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * Description: 'creates and array and initializes with c.'
 * @str: string
 * Return: NULL (Fail) , ptr (Success)
 */

char *_strdup(char *str)
{
	int i = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	ptr = (char *)malloc(i * sizeof(char));
	i = 0;
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = str[i];
	return (ptr);
}
