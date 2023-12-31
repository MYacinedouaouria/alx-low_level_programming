#include "main.h"
/**
 *_memset -  fills the first n bytes of the memory area s with  b
 *@s:the memory area
 *@b:the constant
 *@n:the number of bytes
 *Return:a pointer to the memory area s
 */
char	*_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);

}
