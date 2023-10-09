#include "main.h"
/**
 * _memset - program that fills a block of memory with a specific value
 * @s: strating address of memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 *
 * Return: change array with new value for a byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
