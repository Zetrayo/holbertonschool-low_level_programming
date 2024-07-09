#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * Description: 'concatenates 2 strings'
 * @s1: string 1
 * @s2: string 2
 * Return: NULL (Fail) , ptr (Success)
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, o = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[o] != '\0')
	{
		o++;
	}
	i = i + o + 1;
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	o = 0;
	while (s2[o] != '\0')
	{
		ptr[i] = s2[o];
		i++;
		o++;
	}
	ptr[i] = s2[o];
	return (ptr);
}
