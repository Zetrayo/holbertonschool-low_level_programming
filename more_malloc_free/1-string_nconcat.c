#include <stdio.h>
#include <stdlib.h>

/**
 * **string_nconcat - Entry point
 * Description: 'concatenates 2 strings , with n number of char from s2'
 * @s1: string 1
 * @s2: string 2
 * @n: how many characters from s2 to copy
 * Return: NULL (Fail)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
	int i = 0, o = 0, u = n;

	while (s1 != NULL && s1[i] != '\0')
	{
		i++;
	}
	while (s2 != NULL && s2[o] != '\0' && u > 0)
	{
		o++;
		u--;
	}
	i = i + o + 1;
	ptr = (char *)malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	o = 0;
	while (s2 != NULL && s2[o] != '\0' && n > 0)
	{
		ptr[i] = s2[o];
		i++;
		o++;
		n--;
	}
	ptr[i] = '\0';
	return (ptr);
}
