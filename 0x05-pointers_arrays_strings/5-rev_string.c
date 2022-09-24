#include "main.h"

/**
 * rev_string - reverse a string
 * @s - string
 *
 * return: void
 */
void rev_string(char *s)
{
	int a, b, c;
	char *n, aux;
	n = s;
	while (s[b] != '\0')
	{
		b++;
	}
	for (c = 1; c < b; c++) 
	{
		n++;
	}
	for (a=1; a < (b/2); a++)
	{
		aux = s[a];
		s[a] = *n;
		*n = aux;
		n--;
	}
}
