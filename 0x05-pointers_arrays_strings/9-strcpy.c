#include "main.h"
#include <stdio.h>
/**
 *main - function that copies the string pointed to by src
 *@dest: destination
 *@src: src
 *@strcpy: strcpy
 *Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}
		for (i = 0; i <= length ; i++)
		{
			dest[i] = src[i];
		}
		return (dest);
}
