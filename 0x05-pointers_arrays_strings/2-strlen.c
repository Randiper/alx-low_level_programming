#include "main.h"
#include <string.h>

/**
 * _strlen - gives length of a string
 * @s - a string pointer
 * return: return length of stringg
 */

int _strlen(char *s)
{
	int len;
	for(; *s != '\0'; s++)
	{
		len += 1;
	}
		return (strlen(s));

	
}
