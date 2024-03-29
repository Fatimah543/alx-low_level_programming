#include "main.h"
#include <string.h>

/**
 * _memcpy - fills the first n bytes of the memory of the
 *			memory area pointed to by s with constant byte b
 *
 * @dest: pointer to the string dest
 * @src: pointer to the  string src
 * @n: size in byte of a memory space
 *
 * Return: pointer to the variable dest.
 *
 * Created by: Abdullahi Fatimah
 * cc: 14th, november 2023.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
