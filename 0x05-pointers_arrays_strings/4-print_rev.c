#include "main.h"
#include <string.h>

/**
 *print_rev - prints parameter in reverse
 *@s: parameter to be printed in reverse
 */

void print_rev(char *s)
{
	int i, n;
	s = "hello"
	n = strlen(s);
	for (i = n-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
